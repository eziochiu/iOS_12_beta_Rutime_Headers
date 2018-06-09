/* made by EzioChiu
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

@interface CPSessionConfiguration : NSObject {
    CARSessionStatus * _currentStatus;
    <CPSessionConfigurationDelegate> * _delegate;
    unsigned long long  _limitedUserInterfaces;
}

@property (nonatomic, retain) CARSessionStatus *currentStatus;
@property (nonatomic) <CPSessionConfigurationDelegate> *delegate;
@property (nonatomic) unsigned long long limitedUserInterfaces;

+ (unsigned long long)convertLimitableUserInterfaces:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_limitedUIDidChange:(id)arg1;
- (void)_updateLimitedUIStatus;
- (id)currentStatus;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (unsigned long long)limitedUserInterfaces;
- (void)setCurrentStatus:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLimitedUserInterfaces:(unsigned long long)arg1;

@end
