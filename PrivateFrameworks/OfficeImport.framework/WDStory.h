/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDStory : NSObject {
    OADDrawable * mHead;
    bool  mOle;
}

- (void)dealloc;
- (id)head;
- (id)initWithHead:(id)arg1;
- (bool)isOle;
- (void)setOle:(bool)arg1;
- (id)text;

@end
