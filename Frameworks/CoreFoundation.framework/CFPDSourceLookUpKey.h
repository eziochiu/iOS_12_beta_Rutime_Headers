/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPDSourceLookUpKey : NSObject {
    bool  byHost;
    bool  cloud;
    struct __CFString { } * cloudPath;
    struct __CFString { } * containerPath;
    struct __CFString { } * domain;
    bool  managed;
    bool  managedUsesContainer;
    struct __CFString { } * userName;
}

- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
