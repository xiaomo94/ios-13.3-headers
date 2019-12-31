/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMImageSource : NSObject {
    NSURL * _fileURL;
    struct CGImageSource { } * _imageSourceRef;
}

@property (nonatomic, readonly) bool fileExists;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) struct CGImageSource { }*imageSourceRef;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)fileExists;
- (id)filePath;
- (id)fileURL;
- (struct CGImageSource { }*)imageSourceRef;
- (id)initWithFileURL:(id)arg1;

@end