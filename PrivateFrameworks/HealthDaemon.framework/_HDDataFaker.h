/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDDataFaker : NSObject <_HDDemoDataModuleDelegate> {
    long long  _activityType;
    NSArray * _modules;
    id /* block */  _objectHandler;
    NSOperationQueue * _operationQueue;
    HKQuantity * _speed;
}

@property (nonatomic, readonly) long long activityType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKQuantity *speed;
@property (readonly) Class superclass;

+ (bool)_isSupportedActivityType:(long long)arg1;

- (void).cxx_destruct;
- (id)_generateSamplesForPeriodIncludeLessFrequentSamples:(bool)arg1;
- (long long)activityType;
- (void)demoDataModule:(id)arg1 didProduceDataObject:(id)arg2;
- (void)generateDataForMinutes:(double)arg1 completion:(id /* block */)arg2;
- (id)initWithActivityType:(long long)arg1 speed:(id)arg2 objectHandler:(id /* block */)arg3;
- (id)speed;
- (void)start;
- (void)stop;

@end
