/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUImageDataRequest : NUImageRenderRequest {
    NSString * _dataExtractor;
    NSDictionary * _options;
}

@property (copy) NSString *dataExtractor;
@property (copy) NSDictionary *options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataExtractor;
- (id)initWithComposition:(id)arg1;
- (id)initWithComposition:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3;
- (id)newRenderJob;
- (id)options;
- (void)setDataExtractor:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)submit:(id /* block */)arg1;

@end
