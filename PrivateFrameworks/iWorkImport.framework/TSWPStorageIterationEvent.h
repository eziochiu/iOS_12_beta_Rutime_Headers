/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStorageIterationEvent : NSObject {
    NSString * _identifier;
    NSObject * _object;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    TSWPStorage * _storage;
    int  _type;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) NSObject *object;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic) TSWPStorage *storage;
@property (nonatomic, readonly) int type;

+ (id)characterEventWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)eventWithType:(int)arg1 providerIdentifier:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 object:(id)arg4;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)initWithCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithType:(int)arg1 providerIdentifier:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 object:(id)arg4;
- (bool)isRangeEnd;
- (id)object;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setIdentifier:(id)arg1;
- (void)setStorage:(id)arg1;
- (id)storage;
- (int)type;

@end
