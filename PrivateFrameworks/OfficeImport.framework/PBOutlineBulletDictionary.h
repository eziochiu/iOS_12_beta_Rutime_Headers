/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBOutlineBulletDictionary : NSObject {
    NSMutableDictionary * mDictionary;
}

- (void)dealloc;
- (id)initFromContainer:(id)arg1 objectType:(unsigned int)arg2;
- (id)objectForSlideId:(unsigned int)arg1 textType:(int)arg2 placeholderIndex:(unsigned int)arg3;

@end
