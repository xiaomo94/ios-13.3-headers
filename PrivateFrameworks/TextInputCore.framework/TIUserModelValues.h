/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIUserModelValues : NSObject <TIUserModelValuesProtocol> {
    TICAnalyticsMetricsKey * _context;
    NSMutableDictionary * _durableCounters;
    NSMutableDictionary * _featureDescriptors;
    NSString * _inputMode;
    NSMutableDictionary * _numericValueDescriptors;
    NSMutableDictionary * _settingsDictionary;
    NSMutableDictionary * _settingsValueDescriptors;
    NSMutableDictionary * _stringValues;
    NSMutableDictionary * _transientCounters;
    <TIUserModelDataStoring> * _userModelStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addNumber:(id)arg1 toCounterWithKey:(id)arg2 andCandidateLength:(int)arg3;
- (void)addToTransientCounterFromDatabaseEntry:(id)arg1;
- (void)addValue:(int)arg1 toCounterWithKey:(id)arg2 andCandidateLength:(int)arg3;
- (id)calcTypingSpeed;
- (int)calculateReportingIndexFromInternalIndex:(int)arg1;
- (id)counterValue:(id)arg1;
- (id)counterValueWithWordLength:(id)arg1;
- (float)denominatorFromFeatureDescriptor:(id)arg1;
- (id)featureStateFromFeatureDescriptor:(id)arg1 andValue:(double)arg2;
- (id)featureUsage:(id)arg1 userModel:(id)arg2;
- (id)floatingKeyboardUsage:(id)arg1;
- (id)getTransientCounterForKey:(id)arg1;
- (id)initWithInputMode:(id)arg1 context:(id)arg2 userModelDataStore:(id)arg3 durableCounters:(id)arg4 settingsDictionary:(id)arg5;
- (float)numeratorFromFeatureDescriptor:(id)arg1;
- (void)persistForDate:(id)arg1;
- (bool)settingsBoolValue:(id)arg1;
- (id)stringValue:(id)arg1;
- (void)updateCounterValue:(id)arg1 index:(int)arg2 forKey:(id)arg3;
- (float)valueFromNumerator:(float)arg1 andDenominator:(float)arg2;

@end