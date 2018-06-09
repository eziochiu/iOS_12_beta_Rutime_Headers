/* made by EzioChiu.
 */

@protocol AUPBServing

@required

- (void)copyProcessingBlock:(void *)arg1 property:(void *)arg2 intoReply:(void *)arg3; // needs 3 arg types, found 9: unsigned int, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSData *, void*
- (void)getAudioUnit:(void *)arg1 parameter:(void *)arg2 onScope:(void *)arg3 element:(void *)arg4 inReply:(void *)arg5; // needs 5 arg types, found 11: unsigned int, unsigned int, unsigned int, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, float, void*
- (void)getAudioUnit:(void *)arg1 property:(void *)arg2 onScope:(void *)arg3 element:(void *)arg4 inReply:(void *)arg5; // needs 5 arg types, found 11: unsigned int, unsigned int, unsigned int, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSData *, void*
- (void)getAudioUnit:(void *)arg1 propertyInfo:(void *)arg2 onScope:(void *)arg3 element:(void *)arg4 inReply:(void *)arg5; // needs 5 arg types, found 12: unsigned int, unsigned int, unsigned int, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, unsigned int, unsigned char, void*
- (void)setAudioUnit:(void *)arg1 parameter:(void *)arg2 onScope:(void *)arg3 element:(void *)arg4 value:(void *)arg5 withReply:(void *)arg6; // needs 6 arg types, found 11: unsigned int, unsigned int, unsigned int, unsigned int, float, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)setAudioUnit:(void *)arg1 property:(void *)arg2 onScope:(void *)arg3 element:(void *)arg4 value:(void *)arg5 withReply:(void *)arg6; // needs 6 arg types, found 11: unsigned int, unsigned int, unsigned int, unsigned int, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)setProcessingBlock:(void *)arg1 property:(void *)arg2 value:(void *)arg3 withReply:(void *)arg4; // needs 4 arg types, found 9: unsigned int, unsigned int, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*

@end
