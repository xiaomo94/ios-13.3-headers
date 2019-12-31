/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICURLResponseAuthenticationProvider : NSObject <NSSecureCoding> {
    long long  _interactionLevel;
}

@property (nonatomic, readonly) long long interactionLevel;

+ (id)defaultProvider;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserInteractionLevel:(long long)arg1;
- (long long)interactionLevel;
- (void)performAuthenticationToHandleResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)performAuthenticationUsingRequestContext:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end
