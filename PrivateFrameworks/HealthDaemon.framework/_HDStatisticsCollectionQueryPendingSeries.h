/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDStatisticsCollectionQueryPendingSeries : NSObject {
    NSNumber * _anchor;
    NSMutableArray * _quantities;
    HKQuantitySample * _series;
}

@property (nonatomic, readonly, copy) NSNumber *anchor;
@property (nonatomic, readonly) NSMutableArray *quantities;
@property (nonatomic, readonly) HKQuantitySample *series;

- (void).cxx_destruct;
- (void)addQuantity:(id)arg1 dateInterval:(id)arg2;
- (id)anchor;
- (id)initWithSeries:(id)arg1 anchor:(id)arg2;
- (id)quantities;
- (id)series;

@end
