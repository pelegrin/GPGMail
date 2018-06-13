//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFDeliveryAccount.h>

@class MFEWSAccount;

@interface MFEWSDeliveryAccount : MFDeliveryAccount
{
    MFEWSAccount *_ewsAccount;	// 8 = 0x8
    BOOL _stripsFromHeaderWhenSending;	// 16 = 0x10
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;	// IMP=0x0000000000083dc6
@property BOOL stripsFromHeaderWhenSending; // @synthesize stripsFromHeaderWhenSending=_stripsFromHeaderWhenSending;
- (void).cxx_destruct;	// IMP=0x0000000000085743
- (id)remoteMailAccountsEmployedBy;	// IMP=0x0000000000085659
- (void)setShouldUseAuthentication:(BOOL)arg1;	// IMP=0x0000000000085653
- (BOOL)shouldUseAuthentication;	// IMP=0x0000000000085648
@property __weak MFEWSAccount *associatedAccount;
- (BOOL)isDynamic;	// IMP=0x0000000000085495
- (id)newDelivererWithMessage:(id)arg1;	// IMP=0x0000000000085438
- (id)deliveryIdentifier;	// IMP=0x00000000000853be
- (void)setValidationRequired:(BOOL)arg1;	// IMP=0x00000000000853b8
- (BOOL)validationRequired;	// IMP=0x00000000000853b0
- (BOOL)connectAndAuthenticate:(id)arg1;	// IMP=0x0000000000085338
- (id)authenticatedConnection;	// IMP=0x00000000000852e8
- (id)newConnectedConnectionDiscoveringBestSettings:(BOOL)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3;	// IMP=0x000000000008527e
- (void)validateConnections;	// IMP=0x0000000000085241
- (id)accountTypeString;	// IMP=0x00000000000851f1
- (BOOL)canGoOffline;	// IMP=0x00000000000851ac
- (void)setIsWillingToGoOnline:(BOOL)arg1;	// IMP=0x0000000000085160
- (BOOL)isWillingToGoOnline;	// IMP=0x000000000008511b
- (void)setIsOffline:(BOOL)arg1;	// IMP=0x00000000000850cf
- (BOOL)isOffline;	// IMP=0x000000000008508a
- (long long)defaultSecurePortNumber;	// IMP=0x0000000000085046
- (long long)defaultPortNumber;	// IMP=0x0000000000085002
- (id)standardSSLPorts;	// IMP=0x0000000000084fb2
- (id)standardPorts;	// IMP=0x0000000000084f62
- (BOOL)requiresAuthentication;	// IMP=0x0000000000084f1d
- (id)saslProfileName;	// IMP=0x0000000000084ecd
- (id)identifier;	// IMP=0x0000000000084e7d
- (void)setPreferredAuthScheme:(id)arg1;	// IMP=0x0000000000084e0b
- (id)preferredAuthScheme;	// IMP=0x0000000000084dbb
- (void)setAuthenticationScheme:(id)arg1;	// IMP=0x0000000000084d49
- (id)authenticationScheme;	// IMP=0x0000000000084cf9
- (void)_setSecurityLayerType:(long long)arg1 releasingConnections:(BOOL)arg2;	// IMP=0x0000000000084c77
- (long long)securityLayerType;	// IMP=0x0000000000084c33
- (void)setHostname:(id)arg1;	// IMP=0x0000000000084bc1
- (id)hostname;	// IMP=0x0000000000084b71
- (void)_setUsesSSL:(BOOL)arg1 releasingConnections:(BOOL)arg2;	// IMP=0x0000000000084b20
- (BOOL)usesSSL;	// IMP=0x0000000000084adb
- (void)_setPortNumber:(long long)arg1 releasingConnections:(BOOL)arg2;	// IMP=0x0000000000084a59
- (void)setPortNumber:(long long)arg1;	// IMP=0x0000000000084a0d
- (long long)portNumber;	// IMP=0x00000000000849c9
- (id)appleAuthenticationToken;	// IMP=0x0000000000084979
- (id)applePersonID;	// IMP=0x0000000000084929
- (void)setTLSIdentity:(struct OpaqueSecIdentityRef *)arg1;	// IMP=0x00000000000848dd
- (struct OpaqueSecIdentityRef *)copyTLSIdentity;	// IMP=0x0000000000084899
- (void)setPassword:(id)arg1;	// IMP=0x0000000000084827
- (id)password;	// IMP=0x00000000000847d7
- (void)setUsername:(id)arg1;	// IMP=0x0000000000084765
- (id)username;	// IMP=0x0000000000084715
- (BOOL)discoverConnectionPropertiesAndWait;	// IMP=0x00000000000846d0
- (void)discoverConnectionProperties;	// IMP=0x0000000000084693
- (void)setCanonicalEmailAddress:(id)arg1;	// IMP=0x0000000000084621
- (id)canonicalEmailAddress;	// IMP=0x00000000000845d1
- (void)releaseAllConnections;	// IMP=0x00000000000845cb
- (id)offlineDisplayName;	// IMP=0x00000000000844de
- (void)setDisplayName;	// IMP=0x00000000000844d8
- (id)displayName;	// IMP=0x00000000000843eb
- (void)setStoredDisplayName;	// IMP=0x00000000000843e5
- (id)storedDisplayName;	// IMP=0x00000000000842f8
- (void)dealloc;	// IMP=0x00000000000842af
- (id)initWithAccountInfo:(id)arg1;	// IMP=0x00000000000841e0
- (id)initWithSystemAccount:(id)arg1;	// IMP=0x0000000000084111
- (id)initWithAccount:(id)arg1;	// IMP=0x0000000000084090

@end
