/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCDSummary : NSObject {
    NSString * mAuthor;
    NSString * mComments;
    NSString * mHyperlinkBase;
    NSString * mKeywords;
    NSString * mTitle;
}

- (id)author;
- (id)comments;
- (void)dealloc;
- (id)hyperlinkBase;
- (id)keywords;
- (void)setAuthor:(id)arg1;
- (void)setComments:(id)arg1;
- (void)setHyperlinkBase:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end