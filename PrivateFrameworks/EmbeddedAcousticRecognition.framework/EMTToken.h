/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface EMTToken : NSObject <NSCopying> {
    float  _confidence;
    bool  _followedBySpace;
    bool  _precededBySpace;
    NSString * _text;
}

@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) bool followedBySpace;
@property (nonatomic, readonly) bool precededBySpace;
@property (nonatomic, readonly) NSString *text;

- (void).cxx_destruct;
- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)followedBySpace;
- (unsigned long long)hash;
- (id)initWithText:(id)arg1 confidence:(float)arg2 precededBySpace:(bool)arg3 followedBySpace:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)precededBySpace;
- (id)text;

@end
