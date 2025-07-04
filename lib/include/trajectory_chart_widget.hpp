#ifndef TRAJECTORYCHARTWIDGET_HPP
#define TRAJECTORYCHARTWIDGET_HPP

#include <QWidget>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <vector>
#include "trajectory_logger.hpp"
#include <map>
#include <string>

#include "state.hpp"

QT_USE_NAMESPACE

namespace StochasticSimulation {


    class TrajectoryChartWidget : public QWidget
    {
        Q_OBJECT

    public:
        explicit TrajectoryChartWidget(QWidget* parent = nullptr);

        // Pass trajectory data to display
        void setTrajectory(const std::vector<SimulationState>& trajectory);

    private:
        QChart* chart_;
        QChartView* chartView_;

        // Map species name -> QLineSeries for that species
        std::unordered_map<std::string, QLineSeries*> seriesMap_;

        void setupChart();
    };

}

#endif // TRAJECTORYCHARTWIDGET_HPP
