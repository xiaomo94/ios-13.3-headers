/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAggdLogging : NSObject

+ (id)_addPrefix:(id)arg1 toKeysInDictionary:(id)arg2;
+ (double)_getDateMedian:(id)arg1 fromStartDate:(id)arg2 forCameraCapture:(bool)arg3;
+ (id)_performMedianCalculation:(id)arg1;
+ (void)performAnalysisStateLogging:(id)arg1 library:(id)arg2;
+ (void)performCMMSummaryLogging:(id)arg1 cloudPhotoLibraryEnabled:(bool)arg2;
+ (void)performCTMLibrarySummaryLogging:(id)arg1;
+ (void)performCollectionsStaticsLogging:(id)arg1;
+ (void)performHyperionLocalResourcesLogging:(id /* block */)arg1 inManagedObjectContext:(id)arg2 cloudPhotoLibraryEnabled:(bool)arg3;
+ (void)performHyperionLocalResourcesLoggingForLibrary:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)performLibraryStatisticsLoggingForLibrary:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)performLibrarySummaryLogging:(id)arg1 cloudPhotoLibraryEnabled:(bool)arg2;
+ (void)performMomentsStatisticsLogging:(id)arg1;
+ (void)performPersistentHistorySummaryLogging:(id)arg1;
+ (void)performYearsStaticsLogging:(id)arg1;

@end
