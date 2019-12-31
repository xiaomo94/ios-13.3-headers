/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
 */

@interface PowerUIMLClassifierModelPredictor : NSObject {
    <_CDUserContext> * _context;
    NSObject<OS_os_log> * _log;
    MLModel * _model;
    long long  _pluginBatteryLevel;
    NSDate * _pluginDate;
    <_DKKnowledgeQuerying> * _store;
    double  _threshold;
}

@property (nonatomic, retain) <_CDUserContext> *context;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) MLModel *model;
@property (nonatomic) long long pluginBatteryLevel;
@property (nonatomic, retain) NSDate *pluginDate;
@property (nonatomic, retain) <_DKKnowledgeQuerying> *store;
@property (nonatomic) double threshold;

- (void).cxx_destruct;
- (id)averageDurationAndCountWithPluginDate:(id)arg1;
- (id)chargingDecision:(unsigned long long)arg1 withPluginDate:(id)arg2 forDate:(id)arg3;
- (id)context;
- (double)dynamicallyTuneThresholdForActivity:(id)arg1;
- (id)getBatteryEventsFrom:(id)arg1 to:(id)arg2;
- (double)getHourBinID:(id)arg1;
- (id)getPluginEventsBefore:(id)arg1 withMinimumDuration:(double)arg2;
- (id)init;
- (id)log;
- (id)model;
- (long long)pluginBatteryLevel;
- (id)pluginDate;
- (void)setContext:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setPluginBatteryLevel:(long long)arg1;
- (void)setPluginDate:(id)arg1;
- (void)setStore:(id)arg1;
- (void)setThreshold:(double)arg1;
- (bool)shouldDisableCharging:(unsigned long long)arg1;
- (id)store;
- (double)threshold;
- (id)timeStringFromDate:(id)arg1;
- (double)wasDeviceActiveInLastHourFrom:(id)arg1;

@end
