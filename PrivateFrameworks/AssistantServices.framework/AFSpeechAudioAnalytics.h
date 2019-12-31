/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSpeechAudioAnalytics : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _acousticFeatures;
    NSDictionary * _speechRecognitionFeatures;
}

@property (nonatomic, readonly) NSDictionary *acousticFeatures;
@property (nonatomic, readonly) NSDictionary *speechRecognitionFeatures;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acousticFeatures;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpeechRecognitionFeatures:(id)arg1 acousticFeatures:(id)arg2;
- (id)speechRecognitionFeatures;

@end
