/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PptMetaCharacterBlock : NSObject {
    int  mExtraData;
    int  mPosition;
    int  mType;
}

- (int)extraData;
- (id)initWithType:(int)arg1 position:(int)arg2;
- (id)initWithType:(int)arg1 position:(int)arg2 extraData:(int)arg3;
- (int)position;
- (void)setPosition:(int)arg1;
- (int)type;

@end
