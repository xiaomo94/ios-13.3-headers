/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKNavigation : NSObject <WKObject> {
    struct ObjectStorage<API::Navigation> { 
        struct type { 
            unsigned char __lx[1192]; 
        } data; 
    }  _navigation;
}

@property (readonly) struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long effectiveContentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (id)_request;
- (void)dealloc;
- (long long)effectiveContentMode;

@end
