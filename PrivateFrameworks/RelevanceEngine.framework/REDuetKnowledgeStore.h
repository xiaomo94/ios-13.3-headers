/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REDuetKnowledgeStore : RESingleton {
    _DKKnowledgeStore * _knowledgeStore;
}

- (void).cxx_destruct;
- (id)_createActionsFromDuetEvents:(id)arg1;
- (id)_createEventsFromDuetEvents:(id)arg1;
- (id)_createTimelineFromPredictionTimeline:(id)arg1 filterEmptyData:(bool)arg2;
- (id)_createTombstonesFromDuetEvents:(id)arg1;
- (id)_duetChargingEventStream;
- (id)_duetDonationsStreams;
- (id)_duetQueryForDonatedActionsAfterDate:(id)arg1 onStreams:(id)arg2 withPredicate:(id)arg3;
- (void)_executeQuery:(id)arg1 responseQueue:(id)arg2 synchronouslyWithBatching:(bool)arg3 completion:(id /* block */)arg4;
- (id)_init;
- (id)_queryForDonatedActionsAfterDate:(id)arg1 streams:(id)arg2;
- (id)_queryForUnfilteredDonationsForStream:(id)arg1;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)executeQuerySynchronouslyWithBatching:(id)arg1 completion:(id /* block */)arg2;
- (id)queryForAllDonatedActions;
- (id)queryForAllDonatedActionsWithIdentifier:(id)arg1;
- (id)queryForAllRelevantShortcuts;
- (id)queryForDeletedActionsAfterDate:(id)arg1;
- (id)queryForDonatedActionsAfterDate:(id)arg1;
- (id)queryForDuetEventWithIdentifier:(id)arg1;
- (id)queryForHistoricChargingEventsWithMinimumDuration:(double)arg1 inThePastDays:(unsigned long long)arg2;
- (id)queryForPredictedChargingEventsWithMinimumDuration:(double)arg1;
- (id)queryForTopNApplications:(long long)arg1 withLikelihoodGreaterThan:(double)arg2 withTemporalResolution:(int)arg3;
- (id)queryForUnfilteredIntentDonations;
- (id)queryForUnfilteredRelevantShortcutDonations;
- (id)queryForUnfilteredUserActivityDonations;
- (id)sleepInterval;

@end
