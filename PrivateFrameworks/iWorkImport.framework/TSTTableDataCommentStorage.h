/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSTTableDataCommentStorage : TSTTableDataObject {
    TSDCommentStorage * mCommentStorage;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initObjectWithCommentStorage:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
