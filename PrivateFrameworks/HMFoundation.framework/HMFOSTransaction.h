/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFOSTransaction : HMFObject {
    double  _creationTime;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, readonly) double creationTime;
@property (nonatomic, readonly) NSObject<OS_os_transaction> *transaction;

- (void).cxx_destruct;
- (double)creationTime;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)transaction;

@end
