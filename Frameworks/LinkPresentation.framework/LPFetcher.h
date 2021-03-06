/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPFetcher : NSObject {
    unsigned int  _loggingID;
    id  _userData;
}

@property (nonatomic, readonly) unsigned int _loggingID;
@property (nonatomic, retain) id userData;

- (void).cxx_destruct;
- (unsigned int)_loggingID;
- (void)cancel;
- (void)fetchWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)setUserData:(id)arg1;
- (id)userData;

@end
