/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

@interface UMLogMessage : NSObject {
    NSMutableArray * _privateStrings;
    NSMutableArray * _publicStrings;
}

@property (nonatomic, readonly) NSString *privateString;
@property (nonatomic, retain) NSMutableArray *privateStrings;
@property (nonatomic, readonly) NSString *publicString;
@property (nonatomic, retain) NSMutableArray *publicStrings;

+ (void)_addTaskInfoFrom:(id)arg1 toMessage:(id)arg2;
+ (void)_addUserInfoFrom:(id)arg1 toMessage:(id)arg2;
+ (id)messageWithPrivateFormat:(id)arg1;
+ (id)messageWithPrivateFormat:(id)arg1 arguments:(char *)arg2;
+ (id)messageWithPublicFormat:(id)arg1;
+ (id)messageWithPublicFormat:(id)arg1 arguments:(char *)arg2;
+ (id)messageWithTask:(id)arg1;
+ (id)messageWithTask:(id)arg1 privateFormat:(id)arg2;
+ (id)messageWithTask:(id)arg1 publicFormat:(id)arg2;
+ (id)messageWithUser:(id)arg1;
+ (id)messageWithUser:(id)arg1 privateFormat:(id)arg2;
+ (id)messageWithUser:(id)arg1 publicFormat:(id)arg2;

- (void).cxx_destruct;
- (id)_stringForArray:(id)arg1;
- (void)addPrivateFormat:(id)arg1;
- (void)addPublicFormat:(id)arg1;
- (id)init;
- (id)privateString;
- (id)privateStrings;
- (id)publicString;
- (id)publicStrings;
- (void)setPrivateStrings:(id)arg1;
- (void)setPublicStrings:(id)arg1;

@end
