/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FUChartDataGroup : NSObject <FUChartDataSetDataSource> {
    NSArray * _dataSets;
    <FUChartDataGroupDataSource> * _dataSource;
}

@property (nonatomic, retain) NSArray *dataSets;
@property (nonatomic) <FUChartDataGroupDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dataSetAtIndexCreateIfNecessary:(unsigned long long)arg1;
- (id)_getLabelsForSetAtIndex:(unsigned long long)arg1;
- (unsigned long long)_getNumberOfDataPointsInSetAtIndex:(unsigned long long)arg1;
- (unsigned long long)_getNumberOfDataSets;
- (id)_getPointForSetAtIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2;
- (id)_getPointsForSetAtIndex:(unsigned long long)arg1;
- (void)_reloadDataSet:(id)arg1;
- (void)addDataPointWithXValue:(float)arg1 yValue:(float)arg2 setIndex:(unsigned long long)arg3;
- (id)dataPointsForSet:(id)arg1;
- (id)dataSet:(id)arg1 chartPointForIndex:(unsigned long long)arg2;
- (id)dataSetAtIndex:(unsigned long long)arg1;
- (id)dataSets;
- (id)dataSource;
- (id)description;
- (id)labelsForSet:(id)arg1;
- (id)maxXValue;
- (id)maxYValue;
- (id)minXValue;
- (id)minYValue;
- (unsigned long long)numberOfDataPointsForDataSet:(id)arg1;
- (unsigned long long)numberOfDataSets;
- (void)reloadData;
- (void)reloadDataInSetAtIndex:(unsigned long long)arg1;
- (void)reloadDataPointInSetAtIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2;
- (void)removeDataPointFromSetAtIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2;
- (void)setDataSets:(id)arg1;
- (void)setDataSource:(id)arg1;

@end
