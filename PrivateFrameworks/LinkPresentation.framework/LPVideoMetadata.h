/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPVideoMetadata : NSObject <NSSecureCoding, _LPResolvable> {
    NSURL * _URL;
    NSString * _accessibilityText;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSString * _type;
    unsigned int  _version;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSString *accessibilityText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, readonly) unsigned int version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)_initWithDictionary:(id)arg1;
- (id)accessibilityText;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isValidMIMEType:(id)arg1;
- (long long)maximumBytes;
- (void)setAccessibilityText:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setType:(id)arg1;
- (void)setURL:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)tryToResolveWithWebViewForProcessSharing:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)type;
- (unsigned int)version;

@end
