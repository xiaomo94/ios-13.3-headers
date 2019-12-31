/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKInviteeAlternativeTimeSearcher : NSObject {
    bool  _availabilityRequestInProgress;
    NSOperationQueue * _availabilityRequestsQueue;
    double  _availabilitySearchDurationMultiplier;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSString * _ignoredEventID;
    NSMutableArray * _internalOriginalConflictedParticipants;
    NSDate * _internalOriginalEndDate;
    NSDate * _internalOriginalStartDate;
    NSMutableArray * _internalProposedStarts;
    NSMutableArray * _internalProposedTimes;
    bool  _internalSearchingForMoreTimesWhenAllAttendeesCanAttend;
    bool  _internalSearchingForMoreTimesWhenSomeAttendeesCanAttend;
    NSMutableArray * _internalTimesWhenAllAttendeesCanAttend;
    NSMutableArray * _internalTimesWhenSomeAttendeesCanAttend;
    NSMutableArray * _leftoverSpans;
    NSDate * _nextAvailabilityRangeStartDate;
    bool  _noConflictRequired;
    NSString * _organizerAddress;
    NSDate * _originalRangeStartDate;
    NSMutableDictionary * _participantAddressesToParticipants;
    NSObject<OS_dispatch_queue> * _processingQueue;
    unsigned long long  _remainingSearchAttempts;
    EKSource * _source;
    id /* block */  _stateChanged;
}

@property (nonatomic) bool availabilityRequestInProgress;
@property (nonatomic, retain) NSOperationQueue *availabilityRequestsQueue;
@property (nonatomic) double availabilitySearchDurationMultiplier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) NSString *ignoredEventID;
@property (nonatomic, retain) NSMutableArray *internalOriginalConflictedParticipants;
@property (nonatomic, retain) NSDate *internalOriginalEndDate;
@property (nonatomic, retain) NSDate *internalOriginalStartDate;
@property (nonatomic, retain) NSMutableArray *internalProposedStarts;
@property (nonatomic, retain) NSMutableArray *internalProposedTimes;
@property (nonatomic) bool internalSearchingForMoreTimesWhenAllAttendeesCanAttend;
@property (nonatomic) bool internalSearchingForMoreTimesWhenSomeAttendeesCanAttend;
@property (nonatomic, retain) NSMutableArray *internalTimesWhenAllAttendeesCanAttend;
@property (nonatomic, retain) NSMutableArray *internalTimesWhenSomeAttendeesCanAttend;
@property (nonatomic, retain) NSMutableArray *leftoverSpans;
@property (nonatomic, retain) NSDate *nextAvailabilityRangeStartDate;
@property (nonatomic) bool noConflictRequired;
@property (nonatomic, retain) NSString *organizerAddress;
@property (nonatomic, readonly) NSArray *originalConflictedParticipants;
@property (nonatomic, readonly) NSDate *originalEndDate;
@property (nonatomic, retain) NSDate *originalRangeStartDate;
@property (nonatomic, readonly) NSDate *originalStartDate;
@property (nonatomic, retain) NSMutableDictionary *participantAddressesToParticipants;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic, readonly) NSArray *proposedTimes;
@property (nonatomic) unsigned long long remainingSearchAttempts;
@property (nonatomic, readonly) bool searchingForMoreTimesWhenAllAttendeesCanAttend;
@property (nonatomic, readonly) bool searchingForMoreTimesWhenSomeAttendeesCanAttend;
@property (nonatomic, retain) EKSource *source;
@property (nonatomic, copy) id /* block */ stateChanged;
@property (nonatomic, readonly) NSArray *timesWhenAllAttendeesCanAttend;
@property (nonatomic, readonly) NSArray *timesWhenSomeAttendeesCanAttend;

+ (id)_addressesForParticipants:(id)arg1;
+ (id)_allButFirstItemInArray:(id)arg1;
+ (id)_allButLastItemInArray:(id)arg1;
+ (long long)_binarySearchForIndexOfTimeSpanInArray:(id)arg1 containingDate:(id)arg2;
+ (id)_findHighestRankedNonOptimalTimeSpans:(id)arg1;
+ (id)_findLeftoverSpans:(id)arg1 usingFreeTimes:(id)arg2 andNonOptimalTimes:(id)arg3;
+ (void)_insertUniqueParticipants:(id)arg1 intoExistingParticipantsArray:(id)arg2;
+ (long long)_invalidBinarySearchIndex;
+ (id)_rankNonOptimalTimeSpans:(id)arg1;
+ (id)_selfOrganizerForNewlyScheduledEventWithAddress:(id)arg1;
+ (bool)_span:(id)arg1 hasSameConflictedParticipantsAsSpan:(id)arg2;
+ (void)_validateSpans:(id)arg1;
+ (id)stateAsString:(long long)arg1;

- (void).cxx_destruct;
- (void)_attemptSearch;
- (id)_filterOutUnreasonableTimeSlots:(id)arg1;
- (id)_generateNonOptimalTimesFromTimeSpans:(id)arg1;
- (id)_generateOpenFreeTimesFromTimeSpans:(id)arg1;
- (id)_generateTimeSpansForResults:(id)arg1 betweenStartDate:(id)arg2 endDate:(id)arg3;
- (void)_haltSearchWithError:(bool)arg1;
- (id)_mergeAdjacentSpansWithSameConflictedParticipants:(id)arg1;
- (id)_participantforParticipantAddress:(id)arg1;
- (void)_processResults:(id)arg1 betweenStartDate:(id)arg2 endDate:(id)arg3;
- (void)_resetSearchFallbackNumbers;
- (void)_sendStateChange:(long long)arg1;
- (id)_spliceLeftTimeSpans:(id)arg1 andNewTimeSpans:(id)arg2;
- (void)_transitionToConflictFoundStateAndSearch;
- (bool)availabilityRequestInProgress;
- (id)availabilityRequestsQueue;
- (double)availabilitySearchDurationMultiplier;
- (id)callbackQueue;
- (void)dealloc;
- (id)ignoredEventID;
- (id)initWithStateChangedCallback:(id /* block */)arg1;
- (id)internalOriginalConflictedParticipants;
- (id)internalOriginalEndDate;
- (id)internalOriginalStartDate;
- (id)internalProposedStarts;
- (id)internalProposedTimes;
- (bool)internalSearchingForMoreTimesWhenAllAttendeesCanAttend;
- (bool)internalSearchingForMoreTimesWhenSomeAttendeesCanAttend;
- (id)internalTimesWhenAllAttendeesCanAttend;
- (id)internalTimesWhenSomeAttendeesCanAttend;
- (id)leftoverSpans;
- (id)nextAvailabilityRangeStartDate;
- (bool)noConflictRequired;
- (id)organizerAddress;
- (id)originalConflictedParticipants;
- (id)originalEndDate;
- (id)originalRangeStartDate;
- (id)originalStartDate;
- (id)participantAddressesToParticipants;
- (id)processingQueue;
- (id)proposedTimes;
- (unsigned long long)remainingSearchAttempts;
- (void)resetWithEvent:(id)arg1 organizerAddressForNewlyScheduledEvent:(id)arg2;
- (void)searchForMoreTimesWhenAllAttendeesCanAttend;
- (void)searchForMoreTimesWhenSomeAttendeesCanAttend;
- (bool)searchingForMoreTimesWhenAllAttendeesCanAttend;
- (bool)searchingForMoreTimesWhenSomeAttendeesCanAttend;
- (void)setAvailabilityRequestInProgress:(bool)arg1;
- (void)setAvailabilityRequestsQueue:(id)arg1;
- (void)setAvailabilitySearchDurationMultiplier:(double)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setIgnoredEventID:(id)arg1;
- (void)setInternalOriginalConflictedParticipants:(id)arg1;
- (void)setInternalOriginalEndDate:(id)arg1;
- (void)setInternalOriginalStartDate:(id)arg1;
- (void)setInternalProposedStarts:(id)arg1;
- (void)setInternalProposedTimes:(id)arg1;
- (void)setInternalSearchingForMoreTimesWhenAllAttendeesCanAttend:(bool)arg1;
- (void)setInternalSearchingForMoreTimesWhenSomeAttendeesCanAttend:(bool)arg1;
- (void)setInternalTimesWhenAllAttendeesCanAttend:(id)arg1;
- (void)setInternalTimesWhenSomeAttendeesCanAttend:(id)arg1;
- (void)setLeftoverSpans:(id)arg1;
- (void)setNextAvailabilityRangeStartDate:(id)arg1;
- (void)setNoConflictRequired:(bool)arg1;
- (void)setOrganizerAddress:(id)arg1;
- (void)setOriginalRangeStartDate:(id)arg1;
- (void)setParticipantAddressesToParticipants:(id)arg1;
- (void)setProcessingQueue:(id)arg1;
- (void)setRemainingSearchAttempts:(unsigned long long)arg1;
- (void)setSource:(id)arg1;
- (void)setStateChanged:(id /* block */)arg1;
- (id)source;
- (id /* block */)stateChanged;
- (id)timesWhenAllAttendeesCanAttend;
- (id)timesWhenSomeAttendeesCanAttend;

@end
