/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKBloodPressureChartPoint : NSObject <HKChartPoint> {
    NSDate * _date;
    HKHealthChartPoint * _diastolicChartPoint;
    HKHealthChartPoint * _systolicChartPoint;
    <HKGraphSeriesBlockCoordinateInfo> * _userInfo;
}

@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HKHealthChartPoint *diastolicChartPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) HKHealthChartPoint *systolicChartPoint;
@property (nonatomic, retain) <HKGraphSeriesBlockCoordinateInfo> *userInfo;

- (void).cxx_destruct;
- (id)allYValues;
- (id)date;
- (id)description;
- (id)diastolicChartPoint;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (void)setChartPoint:(id)arg1 forType:(id)arg2;
- (void)setDate:(id)arg1;
- (void)setDiastolicChartPoint:(id)arg1;
- (void)setSystolicChartPoint:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)systolicChartPoint;
- (id)userInfo;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end
