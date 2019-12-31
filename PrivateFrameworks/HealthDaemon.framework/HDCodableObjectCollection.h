/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableObjectCollection : PBCodable <NSCopying> {
    NSMutableArray * _activityCaches;
    NSMutableArray * _binarySamples;
    NSMutableArray * _categorySamples;
    NSMutableArray * _cdaDocumentSamples;
    NSMutableArray * _correlations;
    NSMutableArray * _deletedSamples;
    NSMutableArray * _fitnessFriendAchievements;
    NSMutableArray * _fitnessFriendActivitySnapshots;
    NSMutableArray * _fitnessFriendWorkouts;
    HDCodableGeneratedObjectCollection * _generatedObjectCollection;
    NSMutableArray * _locationSeries;
    NSMutableArray * _medicalRecords;
    HDCodableProvenance * _provenance;
    NSMutableArray * _quantitySamples;
    HDCodableSource * _source;
    NSString * _sourceBundleIdentifier;
    NSMutableArray * _workouts;
}

@property (nonatomic, retain) NSMutableArray *activityCaches;
@property (nonatomic, retain) NSMutableArray *binarySamples;
@property (nonatomic, retain) NSMutableArray *categorySamples;
@property (nonatomic, retain) NSMutableArray *cdaDocumentSamples;
@property (nonatomic, retain) NSMutableArray *correlations;
@property (nonatomic, retain) NSMutableArray *deletedSamples;
@property (nonatomic, retain) NSMutableArray *fitnessFriendAchievements;
@property (nonatomic, retain) NSMutableArray *fitnessFriendActivitySnapshots;
@property (nonatomic, retain) NSMutableArray *fitnessFriendWorkouts;
@property (nonatomic, retain) HDCodableGeneratedObjectCollection *generatedObjectCollection;
@property (nonatomic, readonly) bool hasGeneratedObjectCollection;
@property (nonatomic, readonly) bool hasProvenance;
@property (nonatomic, readonly) bool hasSource;
@property (nonatomic, readonly) bool hasSourceBundleIdentifier;
@property (nonatomic, retain) NSMutableArray *locationSeries;
@property (nonatomic, retain) NSMutableArray *medicalRecords;
@property (nonatomic, retain) HDCodableProvenance *provenance;
@property (nonatomic, retain) NSMutableArray *quantitySamples;
@property (nonatomic, retain) HDCodableSource *source;
@property (nonatomic, retain) NSString *sourceBundleIdentifier;
@property (nonatomic, retain) NSMutableArray *workouts;

+ (Class)activityCachesType;
+ (Class)binarySamplesType;
+ (Class)categorySamplesType;
+ (Class)cdaDocumentSamplesType;
+ (Class)correlationsType;
+ (Class)deletedSamplesType;
+ (Class)fitnessFriendAchievementsType;
+ (Class)fitnessFriendActivitySnapshotsType;
+ (Class)fitnessFriendWorkoutsType;
+ (Class)locationSeriesType;
+ (Class)medicalRecordsType;
+ (Class)quantitySamplesType;
+ (Class)workoutsType;

- (void).cxx_destruct;
- (id)activityCaches;
- (id)activityCachesAtIndex:(unsigned long long)arg1;
- (unsigned long long)activityCachesCount;
- (void)addAccountOwner:(id)arg1;
- (void)addActivityCaches:(id)arg1;
- (void)addAllergyRecord:(id)arg1;
- (void)addBinarySamples:(id)arg1;
- (void)addCategorySamples:(id)arg1;
- (void)addCdaDocumentSamples:(id)arg1;
- (void)addClinicalRecord:(id)arg1;
- (void)addConditionRecord:(id)arg1;
- (void)addCorrelations:(id)arg1;
- (void)addDeletedSamples:(id)arg1;
- (void)addDiagnosticTestReport:(id)arg1;
- (void)addDiagnosticTestResult:(id)arg1;
- (void)addFitnessFriendAchievements:(id)arg1;
- (void)addFitnessFriendActivitySnapshots:(id)arg1;
- (void)addFitnessFriendWorkouts:(id)arg1;
- (void)addLocationSeries:(id)arg1;
- (void)addMedicalRecords:(id)arg1;
- (void)addMedicationDispenseRecord:(id)arg1;
- (void)addMedicationOrder:(id)arg1;
- (void)addMedicationRecord:(id)arg1;
- (void)addProcedureRecord:(id)arg1;
- (void)addQuantitySamples:(id)arg1;
- (void)addUnknownRecord:(id)arg1;
- (void)addVaccinationRecord:(id)arg1;
- (void)addWorkouts:(id)arg1;
- (id)binarySamples;
- (id)binarySamplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)binarySamplesCount;
- (id)categorySamples;
- (id)categorySamplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)categorySamplesCount;
- (id)cdaDocumentSamples;
- (id)cdaDocumentSamplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)cdaDocumentSamplesCount;
- (void)clearActivityCaches;
- (void)clearBinarySamples;
- (void)clearCategorySamples;
- (void)clearCdaDocumentSamples;
- (void)clearCorrelations;
- (void)clearDeletedSamples;
- (void)clearFitnessFriendAchievements;
- (void)clearFitnessFriendActivitySnapshots;
- (void)clearFitnessFriendWorkouts;
- (void)clearLocationSeries;
- (void)clearMedicalRecords;
- (void)clearQuantitySamples;
- (void)clearWorkouts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correlations;
- (id)correlationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)correlationsCount;
- (unsigned long long)count;
- (id)decodedObjects;
- (id)deletedSamples;
- (id)deletedSamplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)deletedSamplesCount;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fitnessFriendAchievements;
- (id)fitnessFriendAchievementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)fitnessFriendAchievementsCount;
- (id)fitnessFriendActivitySnapshots;
- (id)fitnessFriendActivitySnapshotsAtIndex:(unsigned long long)arg1;
- (unsigned long long)fitnessFriendActivitySnapshotsCount;
- (id)fitnessFriendWorkouts;
- (id)fitnessFriendWorkoutsAtIndex:(unsigned long long)arg1;
- (unsigned long long)fitnessFriendWorkoutsCount;
- (id)generatedObjectCollection;
- (bool)hasGeneratedObjectCollection;
- (bool)hasProvenance;
- (bool)hasSource;
- (bool)hasSourceBundleIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locationSeries;
- (id)locationSeriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationSeriesCount;
- (id)medicalRecords;
- (id)medicalRecordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)medicalRecordsCount;
- (void)mergeFrom:(id)arg1;
- (id)provenance;
- (id)quantitySamples;
- (id)quantitySamplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)quantitySamplesCount;
- (bool)readFrom:(id)arg1;
- (void)setActivityCaches:(id)arg1;
- (void)setBinarySamples:(id)arg1;
- (void)setCategorySamples:(id)arg1;
- (void)setCdaDocumentSamples:(id)arg1;
- (void)setCorrelations:(id)arg1;
- (void)setDeletedSamples:(id)arg1;
- (void)setFitnessFriendAchievements:(id)arg1;
- (void)setFitnessFriendActivitySnapshots:(id)arg1;
- (void)setFitnessFriendWorkouts:(id)arg1;
- (void)setGeneratedObjectCollection:(id)arg1;
- (void)setLocationSeries:(id)arg1;
- (void)setMedicalRecords:(id)arg1;
- (void)setProvenance:(id)arg1;
- (void)setQuantitySamples:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setSourceBundleIdentifier:(id)arg1;
- (void)setWorkouts:(id)arg1;
- (id)source;
- (id)sourceBundleIdentifier;
- (bool)unitTest_isEquivalentToObjectCollection:(id)arg1;
- (id)workouts;
- (id)workoutsAtIndex:(unsigned long long)arg1;
- (unsigned long long)workoutsCount;
- (void)writeTo:(id)arg1;

@end
