/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptProtocol : SUScriptObject

@property (retain) NSArray *allowedOrientations;
@property (readonly) NSString *clientIdentifier;
@property (retain) NSString *copyright;
@property bool excludeFromNavigationHistory;
@property (retain) SUScriptURLRequest *overlayBackgroundURLRequest;
@property (readonly) NSString *protocolVersion;
@property bool shouldShowInOverlay;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (id)_copyProtocol;
- (void)_setProtocol:(id)arg1;
- (void)_setValue:(id)arg1 forProtocolKey:(id)arg2;
- (id)_webThreadValueForProtocolKey:(id)arg1;
- (id)allowedOrientations;
- (id)attributeKeys;
- (id)clientIdentifier;
- (id)copyright;
- (bool)excludeFromNavigationHistory;
- (id)overlayBackgroundURLRequest;
- (id)protocolVersion;
- (id)scriptAttributeKeys;
- (void)setAllowedOrientations:(id)arg1;
- (void)setCopyright:(id)arg1;
- (void)setExcludeFromNavigationHistory:(bool)arg1;
- (void)setOverlayBackgroundURLRequest:(id)arg1;
- (void)setShouldShowInOverlay:(bool)arg1;
- (void)setValuesFromDictionary:(id)arg1;
- (bool)shouldShowInOverlay;

@end
