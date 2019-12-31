/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextParagraph : NSTextElement {
    NSAttributedString * _attributedString;
    NSTextRange * _paragraphContentRange;
    NSTextRange * _paragraphSeparatorRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSTextDataProvider * _textDataProvider;
    NSMutableArray * _textLayoutFragments;
}

@property (readonly, copy) NSAttributedString *attributedString;
@property (readonly) NSTextRange *paragraphContentRange;
@property (readonly) NSTextRange *paragraphSeparatorRange;

+ (id)textParagraphsForAttributedString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

- (id)attributedString;
- (void)dealloc;
- (id)init;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithTextContentManager:(id)arg1;
- (id)paragraphContentRange;
- (id)paragraphRange;
- (id)paragraphSeparatorRange;
- (void)setAttributedString:(id)arg1;
- (void)setParagraphContentRange:(id)arg1;
- (void)setParagraphSeparatorRange:(id)arg1;
- (void)setTextDataProvider:(id)arg1;
- (void)synchronizeDocumentRange;
- (id)textDataProvider;

@end
