/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKDeviceActivityStandingQuery : NSObject <_DKStandingQuery> {
    NSObject<OS_xpc_object> * activity;
    NSString * queryIdentifier;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *activity;
@property (nonatomic, retain) NSString *queryIdentifier;

- (void).cxx_destruct;
- (long long)_computeSlotForDate:(id)arg1;
- (id)_customIdentifierForDayOfWeek:(long long)arg1;
- (double)_deviceActivityEphemerality;
- (id)_predicateForDeletedEventsWithReferenceDate:(id)arg1;
- (bool)_shouldDefer;
- (id)activity;
- (void)executeWithStorage:(id)arg1;
- (void)executeWithStorage:(id)arg1 referenceDate:(id)arg2;
- (id)fetchResult;
- (id)fetchResultForDayOfWeek:(long long)arg1;
- (id)fetchResultForDayOfWeek:(long long)arg1 withStorage:(id)arg2;
- (id)fetchResultFromStorage:(id)arg1;
- (id)fetchResultWithReferenceDate:(id)arg1 withStorage:(id)arg2;
- (id)histogramForDate:(id)arg1 withReference:(id)arg2 andUpdate:(id)arg3;
- (id)init;
- (id)queryIdentifier;
- (void)setActivity:(id)arg1;
- (void)setQueryIdentifier:(id)arg1;

@end
