/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAnalysisInfo : NSObject {
    long long  _analysisVersion;
    unsigned long long  _flags;
    double  _junkScore;
    NSDate * _performedAnalysisDate;
    unsigned long long  _performedAnalysisTypes;
    double  _qualityScore;
    NSArray<MiroMetadataRangeMergeable> * _ranges;
}

@property (nonatomic) long long analysisVersion;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) double junkScore;
@property (nonatomic, retain) NSDate *performedAnalysisDate;
@property (nonatomic) unsigned long long performedAnalysisTypes;
@property (nonatomic) double qualityScore;
@property (nonatomic, retain) NSArray<MiroMetadataRangeMergeable> *ranges;

+ (id)analysisInfo;
+ (id)analysisInfoWithVPAnalysisInfo:(id)arg1;
+ (id)descriptionForAnalysisTypes:(unsigned long long)arg1;

- (void).cxx_destruct;
- (long long)analysisVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)flags;
- (double)junkScore;
- (void)mergeWith:(id)arg1;
- (id)performedAnalysisDate;
- (unsigned long long)performedAnalysisTypes;
- (double)qualityScore;
- (id)ranges;
- (void)setAnalysisVersion:(long long)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setJunkScore:(double)arg1;
- (void)setPerformedAnalysisDate:(id)arg1;
- (void)setPerformedAnalysisTypes:(unsigned long long)arg1;
- (void)setQualityScore:(double)arg1;
- (void)setRanges:(id)arg1;

@end
