/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISceneRequestOptions : FBSWorkspaceSceneRequestOptions <BSXPCSecureCoding> {
    NSSet * _actions;
    bool  _preserveLayout;
    bool  _requestBackground;
    bool  _requestFullscreen;
    NSString * _sourceIdentifier;
}

@property (nonatomic, copy) NSSet *actions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool preserveLayout;
@property (nonatomic) bool requestBackground;
@property (nonatomic) bool requestFullscreen;
@property (nonatomic, copy) NSString *sourceIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)actions;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)preserveLayout;
- (bool)requestBackground;
- (bool)requestFullscreen;
- (void)setActions:(id)arg1;
- (void)setPreserveLayout:(bool)arg1;
- (void)setRequestBackground:(bool)arg1;
- (void)setRequestFullscreen:(bool)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (id)sourceIdentifier;

@end
