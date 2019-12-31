/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAnalyticsReporter : NSObject {
    NSData * _archivedSessionToken;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lockArchive;
    RTCReporting * _session;
    RTCSecureHierarchyToken * _sessionToken;
}

+ (id)archivedSessionTokenForSubject:(id)arg1;
+ (void)beginSubjectReporting:(id)arg1;
+ (void)beginSubjectReporting:(id)arg1 withArchivedParent:(id)arg2;
+ (void)endSubjectReporting:(id)arg1;
+ (void)reportDashboardEventIfNecessary:(id)arg1 forPass:(id)arg2;
+ (id)reporterForSubject:(id)arg1;
+ (void)sendSingularEvent:(id)arg1;
+ (void)subject:(id)arg1 sendEvent:(id)arg2;
+ (id)subjectDictionary;
+ (id)subjectToReportDashboardAnalyticsForAccount:(id)arg1;
+ (id)subjectToReportDashboardAnalyticsForPass:(id)arg1;
+ (void)subjects:(id)arg1 sendEvent:(id)arg2;

- (void).cxx_destruct;
- (id)archivedSessionToken;
- (id)initWithArchivedParent:(id)arg1 subject:(id)arg2;
- (id)initWithParent:(id)arg1 subject:(id)arg2;
- (id)initWithParentToken:(id)arg1 subject:(id)arg2;
- (id)initWithSubject:(id)arg1;
- (void)sendEvent:(id)arg1;

@end
