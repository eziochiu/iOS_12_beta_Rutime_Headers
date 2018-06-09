/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CARScreenInfo : NSObject {
    NSString * _identifier;
    unsigned long long  _maxFramesPerSecond;
    struct CGSize { 
        double width; 
        double height; 
    }  _physicalSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelSize;
    bool  _supportsHighFidelityTouch;
    unsigned long long  _systemAvailableInteractionModels;
    unsigned long long  _systemPrimaryInteractionModel;
    NSArray * _viewAreas;
}

@property (nonatomic, readonly) unsigned long long availableInteractionModels;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long maxFramesPerSecond;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } physicalSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic, readonly) unsigned long long primaryInteractionModel;
@property (nonatomic, readonly) bool supportsHighFidelityTouch;
@property (nonatomic) unsigned long long systemAvailableInteractionModels;
@property (nonatomic) unsigned long long systemPrimaryInteractionModel;
@property (nonatomic, readonly, copy) NSArray *viewAreas;

- (void).cxx_destruct;
- (bool)_currentProcessHasEntitlement;
- (id)_descriptionForInteractionModel:(unsigned long long)arg1;
- (unsigned long long)availableInteractionModels;
- (id)description;
- (id)descriptionForAvailableInteractionModels;
- (id)descriptionForPrimaryInteractionModel;
- (id)identifier;
- (id)initWithPropertySupplier:(id /* block */)arg1;
- (unsigned long long)maxFramesPerSecond;
- (struct CGSize { double x1; double x2; })physicalSize;
- (struct CGSize { double x1; double x2; })pixelSize;
- (unsigned long long)primaryInteractionModel;
- (void)setSystemAvailableInteractionModels:(unsigned long long)arg1;
- (void)setSystemPrimaryInteractionModel:(unsigned long long)arg1;
- (bool)supportsHighFidelityTouch;
- (unsigned long long)systemAvailableInteractionModels;
- (unsigned long long)systemPrimaryInteractionModel;
- (id)viewAreas;

@end
