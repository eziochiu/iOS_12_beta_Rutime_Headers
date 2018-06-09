/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDLink : NSObject {
    EDCollection * mExternalNames;
    int  mType;
}

+ (id)linkWithType:(int)arg1;

- (void)dealloc;
- (id)description;
- (id)externalNames;
- (id)initWithType:(int)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
