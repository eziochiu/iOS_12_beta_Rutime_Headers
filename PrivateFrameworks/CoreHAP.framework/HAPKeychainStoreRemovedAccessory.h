/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPKeychainStoreRemovedAccessory : HMFObject {
    NSString * _accessoryName;
    NSDate * _creationDate;
    NSError * _removeError;
}

@property (nonatomic, readonly) NSString *accessoryName;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, retain) NSError *removeError;

- (void).cxx_destruct;
- (id)accessoryName;
- (id)creationDate;
- (id)description;
- (id)initWithName:(id)arg1 creationDate:(id)arg2;
- (id)removeError;
- (void)setRemoveError:(id)arg1;

@end
