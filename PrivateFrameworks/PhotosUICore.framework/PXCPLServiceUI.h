/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCPLServiceUI : NSObject {
    <PXCPLService> * _cplService;
    <PXCPLServiceUIDelegate> * _delegate;
    struct { 
        bool progressDidChange; 
        bool performAction; 
    }  _delegateRespondsTo;
    PXCPLServiceStatus * _serviceStatus;
    <PXCPLServiceUIStatus> * _serviceUIStatus;
}

@property (nonatomic) <PXCPLServiceUIDelegate> *delegate;
@property (nonatomic, readonly) PXCPLServiceStatus *serviceStatus;
@property (nonatomic, readonly) <PXCPLServiceUIStatus> *serviceUIStatus;

- (void).cxx_destruct;
- (void)_handleUpdatedServiceStatus:(id)arg1;
- (void)_performAction:(long long)arg1;
- (void)_serviceUIStatusDidChange:(id)arg1 onlyProgressDidChange:(bool)arg2;
- (id)delegate;
- (id)init;
- (id)initWithCPLService:(id)arg1;
- (id)serviceStatus;
- (id)serviceUIStatus;
- (void)setDelegate:(id)arg1;

@end
