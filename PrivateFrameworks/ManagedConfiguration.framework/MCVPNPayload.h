/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSMutableDictionary, NSString;

@interface MCVPNPayload : MCPayload {
    NSMutableDictionary *_atom;
    NSString *_certificateUUID;
    NSString *_password;
    NSString *_passwordKey;
    unsigned char _passwordRequired;
    NSString *_pin;
    NSString *_pinKey;
    unsigned char _pinRequired;
    NSString *_proxyPassword;
    NSString *_proxyPasswordKey;
    unsigned char _proxyPasswordRequired;
    NSString *_proxyUserName;
    NSString *_proxyUserNameKey;
    unsigned char _proxyUserNameRequired;
    NSString *_sharedSecret;
    NSString *_sharedSecretKey;
    unsigned char _sharedSecretRequired;
    NSString *_userName;
    NSString *_userNameKey;
    unsigned char _userNameRequired;
}

@property(readonly) NSDictionary *atom;
@property(readonly) NSString *certificateUUID;
@property(copy) NSString *password;
@property(readonly) NSString *passwordKey;
@property(copy) NSString *pin;
@property(readonly) NSString *pinKey;
@property(copy) NSString *proxyPassword;
@property(readonly) NSString *proxyPasswordKey;
@property(copy) NSString *proxyUserName;
@property(readonly) NSString *proxyUserNameKey;
@property(copy) NSString *sharedSecret;
@property(readonly) NSString *sharedSecretKey;
@property(copy) NSString *userName;
@property(readonly) NSString *userNameKey;
@property(readonly) unsigned char passwordRequired;
@property(readonly) unsigned char pinRequired;
@property(readonly) unsigned char proxyPasswordRequired;
@property(readonly) unsigned char proxyUserNameRequired;
@property(readonly) unsigned char sharedSecretRequired;
@property(readonly) unsigned char userNameRequired;

+ (id)localizedDescriptionForPayloadCount:(NSUInteger)arg1;
+ (id)typeStrings;

- (void)_validateVPNPayload:(id)arg1;
- (id)atom;
- (id)certificateUUID;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)password;
- (id)passwordKey;
- (unsigned char)passwordRequired;
- (id)pin;
- (id)pinKey;
- (unsigned char)pinRequired;
- (id)proxyPassword;
- (id)proxyPasswordKey;
- (unsigned char)proxyPasswordRequired;
- (id)proxyUserName;
- (id)proxyUserNameKey;
- (unsigned char)proxyUserNameRequired;
- (void)setPassword:(id)arg1;
- (void)setPin:(id)arg1;
- (void)setProxyPassword:(id)arg1;
- (void)setProxyUserName:(id)arg1;
- (void)setSharedSecret:(id)arg1;
- (void)setUserName:(id)arg1;
- (id)sharedSecret;
- (id)sharedSecretKey;
- (unsigned char)sharedSecretRequired;
- (id)userName;
- (id)userNameKey;
- (unsigned char)userNameRequired;

@end