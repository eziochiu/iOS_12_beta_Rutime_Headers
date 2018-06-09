/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDBGSlide : GQDBGAbstractSlide {
    GQDBGMasterSlide * mMaster;
    GQDWPLayoutFrame * mNoteFrame;
}

- (void)dealloc;
- (id)init;
- (id)master;
- (id)noteFrame;

@end
