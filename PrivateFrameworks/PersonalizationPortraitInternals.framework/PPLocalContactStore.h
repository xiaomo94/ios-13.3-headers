/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPLocalContactStore : NSObject <PPFeedbackAccepting> {
    PPContactStorage * _contactStorage;
    PPMFeedbackRegistered * _feedbackTracker;
    PPM2FeedbackPortraitRegistered * _feedbackTracker2;
}

+ (id)defaultStore;

- (void).cxx_destruct;
- (id)contactNameRecordChangesForClient:(id)arg1 error:(id*)arg2;
- (id)contactNameRecordsForClient:(id)arg1 error:(id*)arg2;
- (id)contactsWithQuery:(id)arg1 error:(id*)arg2;
- (id)contactsWithQuery:(id)arg1 explanationSet:(id)arg2 timeoutSeconds:(double)arg3 error:(id*)arg4;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2;
- (id)init;
- (bool)iterContactNameRecordsForClient:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)rankedContactsWithQuery:(id)arg1 error:(id*)arg2;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;
- (id)scoredContactsWithContacts:(id)arg1;

@end
