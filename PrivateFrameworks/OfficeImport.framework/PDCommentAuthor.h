/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDCommentAuthor : NSObject {
    unsigned int  mColorIndex;
    unsigned int  mId;
    NSString * mInitials;
    unsigned int  mLastCommentIndex;
    NSString * mName;
}

- (unsigned int)colorIndex;
- (void)dealloc;
- (id)description;
- (unsigned int)id;
- (id)init;
- (id)initials;
- (unsigned int)lastCommentIndex;
- (id)name;
- (void)setColorIndex:(unsigned int)arg1;
- (void)setId:(unsigned int)arg1;
- (void)setInitials:(id)arg1;
- (void)setLastCommentIndex:(unsigned int)arg1;
- (void)setName:(id)arg1;

@end
