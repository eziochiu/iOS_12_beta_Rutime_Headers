/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
 */

@interface NMBUISyncSpecifierProvider : NSObject {
    <NMBUISyncSpecifierListener> * _listener;
    unsigned int  _mediaTypes;
    PSSpecifier * _syncProgressSpecifier;
}

@property (nonatomic) <NMBUISyncSpecifierListener> *listener;
@property (nonatomic) unsigned int mediaTypes;
@property (nonatomic, readonly) PSSpecifier *progressSpecifier;

- (void).cxx_destruct;
- (void)_updateProgress;
- (void)dealloc;
- (id)initWithMediaTypes:(unsigned int)arg1 listener:(id)arg2;
- (id)listener;
- (unsigned int)mediaTypes;
- (id)progressSpecifier;
- (void)setListener:(id)arg1;
- (void)setMediaTypes:(unsigned int)arg1;

@end
