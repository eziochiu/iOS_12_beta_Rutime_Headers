/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVXPCTransaction : NSObject {
    NSUUID * _identifier;
    NSString * _name;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly) NSString *name;

+ (id)activeTransactions;

- (void).cxx_destruct;
- (id)_identifier;
- (void)beginTransaction;
- (void)dealloc;
- (id)description;
- (void)endTransaction;
- (void)endTransactionOnDate:(id)arg1;
- (id)initWithName:(id)arg1;
- (bool)isActive;
- (id)name;

@end
