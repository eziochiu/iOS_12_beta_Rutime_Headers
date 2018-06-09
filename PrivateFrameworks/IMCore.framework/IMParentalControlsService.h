/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMParentalControlsService : NSObject {
    bool  _disableService;
    bool  _forceWhiteList;
    NSString * _name;
    NSSet * _whitelist;
}

@property bool disableService;
@property bool forceWhiteList;
@property (retain) NSString *name;
@property (retain) NSSet *whitelist;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)disableService;
- (bool)forceWhiteList;
- (id)name;
- (void)setDisableService:(bool)arg1;
- (void)setForceWhiteList:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setWhitelist:(id)arg1;
- (id)whitelist;

@end
