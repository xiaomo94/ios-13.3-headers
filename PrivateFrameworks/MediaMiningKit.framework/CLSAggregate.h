/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

@interface CLSAggregate : NSObject {
    bool  _allowWeeklyUpdates;
    NSString * _primaryDomain;
}

@property (nonatomic, readonly) bool allowWeeklyUpdates;
@property (nonatomic, retain) NSString *primaryDomain;

+ (id)sharedCLSAggregate;

- (void).cxx_destruct;
- (id)_aggdMethodConstructionHints;
- (id)_aggdMethodConstructionHintsForKey:(id)arg1;
- (id)_allRegisteredKeys;
- (id)_distributionKeys;
- (id)_doubleValueTypeKeys;
- (id)_getSubdomain:(id)arg1;
- (id)_keysForWeeklyReporting;
- (id)_messageTracerMethodConstructionHints;
- (id)_messageTracerMethodConstructionHintsForKey:(id)arg1;
- (id)_needsParsingKeys;
- (void)_recordAGGDValue:(id)arg1 forKey:(id)arg2;
- (void)_recordMessageTracerValue:(id)arg1 forKey:(id)arg2;
- (id)_registeredKeysLookupTable;
- (id)_scalarToAddKeys;
- (id)_stringValueTypeKeys;
- (id)_truncateToSignificantFigureForValue:(id)arg1 numOfSignificantDigits:(int)arg2;
- (bool)allowWeeklyUpdates;
- (void)incrementValueForKey:(id)arg1;
- (id)init;
- (void)invalidateForWeeklyUpdates;
- (id)primaryDomain;
- (void)recordValue:(id)arg1 forKey:(id)arg2;
- (void)setPrimaryDomain:(id)arg1;

@end
