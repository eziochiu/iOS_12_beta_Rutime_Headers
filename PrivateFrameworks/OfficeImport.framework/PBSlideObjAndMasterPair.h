/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBSlideObjAndMasterPair : NSObject {
    int  mMasterId;
    PDSlide * mSlide;
}

+ (id)createPair:(id)arg1 masterId:(int)arg2;

- (void)dealloc;
- (int)masterId;
- (void)setSlide:(id)arg1 masterId:(int)arg2;
- (id)slide;

@end
