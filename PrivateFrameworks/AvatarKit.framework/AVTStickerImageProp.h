/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTStickerImageProp : AVTStickerProp {
    struct UIImage { Class x1; } * _image;
}

@property (nonatomic, readonly) UIImage *image;

- (void).cxx_destruct;
- (void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 forExport:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct UIImage { Class x1; }*)image;
- (id)initWithImage:(struct UIImage { Class x1; }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(struct SCNVector3 { float x1; float x2; float x3; })arg3 position:(struct SCNVector3 { float x1; float x2; float x3; })arg4 renderLast:(bool)arg5 orientToCamera:(bool)arg6 rotation:(struct SCNVector3 { float x1; float x2; float x3; })arg7 palettesDescriptions:(id)arg8 modifiers:(id)arg9;

@end
