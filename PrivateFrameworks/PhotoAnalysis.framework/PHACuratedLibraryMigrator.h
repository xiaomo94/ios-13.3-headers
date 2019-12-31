/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHACuratedLibraryMigrator : NSObject <PHAGraphRegistration>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)delayMigrateCuratedLibraryActivity:(id)arg1;
- (void)graphUpdateDidStop;
- (void)graphUpdateIsConsistent;
- (void)graphUpdateMadeProgress:(double)arg1;
- (void)migrateCuratedLibraryWithActivity:(id)arg1 executive:(id)arg2;
- (bool)wantsGraphUpdateNotifications;
- (bool)wantsLiveGraphUpdates;

@end
