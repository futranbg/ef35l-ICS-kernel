#ifndef __CUST_SKY_DS_H__
#define __CUST_SKY_DS_H__


/*****************************************************
    SKY Android �� ���� �������
    Feature Name : T_SKY_MODEL_TARGET_COMMON
******************************************************/
#ifdef T_SKY_MODEL_TARGET_COMMON

#endif /* T_SKY_MODEL_TARGET_COMMON */


/* ######################################################################### */
/*****************************************************
    SKT/KT ���� �������
    Feature Name : T_SKY_MODEL_TARGET_WCDMA
    CUST_SKY.h�� include �ؾ� ��.
******************************************************/
#ifdef T_SKY_MODEL_TARGET_WCDMA
/************************************************************************************************************************
**    1. Related 3G-connection
************************************************************************************************************************/

/* 
 - Phone Interface�� ���� ���ϴ� APP�� ���Ͽ� AIDL�� �߰�
 - aidl ���� : ISkyDataConnection.aidl
 - �������̽� ���� : MMDataConnectionTracker.java
 - �߰� ���� ���� : DataPhone.java, Phone.java , SkyDataConInterfaceManager.java
 - aidl ���� �߰� : service_manager.c�� .aidl �߰�
 - make ���� ���� : android/framework/base/Android.mk ����
 - telephony/java/com/android/internal/telephony/ISkyDataConnection.aidl �߰�
*/
#define FEATURE_SKY_DS_ADD_DATA_AIDL

/* 
 - startUsingNetworkFeature���� Reconnect ȣ��� Fail�� �߻��Ͽ��� Phone.APN_REQUEST_STARTED�� �����Ͽ� Application���� ȥ���� ������
 - reconnect ���н� APN_REQUEST_FAILED�� �����ϵ��� ����
*/
#define FEATURE_SKY_DS_BUG_FIX_STARTUSINGNETWORKFEATURE

// TEMP BLOCK
/*
 - Fast Dormancy ��� ����
 - �ó����� : LCD ON�� 19�� �� Dormant ����, LCD OFF�� 5�� �� Dormant ����
 - aArm : LCD ON/OFF ������ mArm���� �����ϵ��� ����
 - mArm : FEATURE_SKY_DS_FAST_DORMANCY ����
*/
#define FEATURE_SKY_DS_FAST_DORMANCY

/*
 - �����迡�� pdp connection fail �� retry timer �����ϸ鼭 ������ �̵��ÿ� ������ timer ������ retry �Ͽ� ������ �ȵǴ°����� 
   ���̴� ����߻��Ͽ� screen on ���¿����� timer ������Ű�� �ʰ�, off->on �� ��� �ٷ� try �ϵ��ϼ���
*/
#define FEATURE_SKY_DS_IMMEDIATE_SETUP

/* 
 - permanentfail �� alert pop-up �� data disable ��Ŵ=> ���� 
 - permanent failure �߻��� ��� Notify ������ ��Ʈ�� �������� �˸���, 3G ������ �״�� ����
 - 3G Off->On �� ������ Noti ������.
*/
#define FEATURE_SKY_DS_PDP_REJECT_POPUP

/* 
 - no service event �� �߻��� ��� ���� data ������� �ʰ� disconnected �� broadcast �Ǿ� default route �����ǰ� 
   �ٷ� in service ���ԵǸ� �Ʒ������δ� data ����Ǿ� ������ �������� ������� ���� ������ ���̴� ���� 
 - dataconnectiontracker.java , BSP ���� �ּ�ó���Ǿ� �ʿ� ���� ��� ����. 
*/
#define FEATURE_SKY_DS_NO_SERVICE_BUG_FIX

/* 
 - TIMEOUT_INITIAL�� 1�ʷ� ����.
*/
#define FEATURE_SKY_DS_DHCP_DISCOVER_TIMER

/* 
 - CNE enable �Ǿ� WIFI����� 3G ������� �ʴ� ������ �߻�.
 - CNE �κ� �ӽ÷� �ּ� ó��. 
 - Ĩ�� ���� CNE�� �����Ǿ� ���� �� ����.
 - LINUX\android\devices\qcom\msmxxxx_surf\system.prop
*/ 
#define FEATURE_SKY_DS_CNE_DISABLE

/*
- datausage �޴����� background data ���� �� for loop �� ���� UID ���� ip table �� set �� �־� 
   app ���� �ð� �� ���� ���� anr �߻� �� background data ���� ���� �� booting �� system ���� 
   anr �߻��ϴ� ���� ����   =>�� UID ���� event �� ó���ǵ��� ��.
- android_filesystem_config.h  �� Define �� UID �� system UID �� ����. 
- system/bin/iptables �� system �������� �Ǿ� ������ ip6tables �� shell �� �Ǿ� �վ� system ���� ����.
   -NetworkPolicyManagerService.java
*/
#define FEATURE_SKY_DS_BACKGROUND_RESTRICT_BUG_FIX

/*
- system/bin/iptables �� system �������� �Ǿ� ������ ip6tables �� shell �� �Ǿ� �վ� system ���� ����.
   -android_filesystem_config.h
*/

#define FEATURE_SKY_DS_IP6TABLE_UID_BUG_FIX

/*
- LINUX\android\kernel\arch\arm\configs\Ĩ�̸�_������Ʈ�̸�_�ϵ��������_deconfig
*/
#define FEATURE_SKY_DS_DEFAULT_CONGESTION_CONTROL

/*
 - ISkyDataConnection�� 3rd parth app���� ������ ��뷮 �ʰ� ������ �Ǵ��� �� �ִ� API �߰�
*/ 
#define FEATURE_SKY_DS_NET_OVERLIMIT_API

/*
 - ������� �ʴ� 3GPP2 �������� ���μ��� ����
*/
#define FEATURE_SKY_DS_SKIP_3GPP2_PROFILE_PROCESS

/*
- rild�� ����ġ �ʴ� ���� �� �� ����� data ���� ���� �ʴ� ���� �߻�
- CS service�� detach attach�Ǵ� ������ ������, Data service�� ��� ����� ���¸� �����ϰ� ����.
- CS service�� service state�� sync��Ŵ. CS only�� ���� ������.
 - GsmServiceStateTracker.java
*/
#define FEATURE_SKY_DS_SYNC_CS_SERVICE_STATE

/*
 - system busy �϶� ���������� Data Registration State query �����Ͽ� data service state �� out_of_service, radio tech �� unknown ���� ǥ�õǴ� ����
 - ServiceStateTracker ���� newSS �� ���� SS �� update ��Ű�� clear ��Ų �� ���� polling �� newSS ������ �ٽ� SS �� ������Ʈ ��Ű�� �Ǵµ� 
    �̶� newSS clear ��Ų �� data ���� ���� ���� ss ���� set �� �־� error �߻��� �� ���� �����ǵ��� �����ڵ� ó����.
*/
#define FEATURE_SKY_DS_DATA_REGISTRATION_QUERY_FAIL_RECOVERY

/************************************************************************************************************************
**    2. Related MENU / UI
************************************************************************************************************************/
/*
 - APN Settings Menu�� Hidden Code(##276#7388464#)�� ���� �� �� �ֵ��� ����
*/
#define FEATURE_SKY_DS_ADD_APN_SETTING_HIDDEN_CODE

/*
 - ����� ��Ʈ��ũ ���� �޴��� ������ ��� �޴� ���� 
*/
#define FEATURE_SKY_DS_DATA_USAGE_MENU_BLOCKING

/* 
 - APN �޴� ����� �������� �̵� (DS1_DATA_REMOVE_APN_SETTING_MENU ����)
 - default apn�� ���Ͽ� ���� �Ұ� �ϵ��� ����
 - Hidden Code�� �Ϲ� ����� �޴� �����Ͽ� �����ϵ��� ����
 - Defualt apn�� ���� �� ���, ������Ű���� ������. => �ó����� ����.
   3G on �� ���, apn�� "web.sktelecom.com"�� �ƴϸ� apn�� ������Ŵ.
*/
#define FEATURE_SKY_DS_PREVENT_EDIT_DEFAULT_APN

/* 
 - overylay ������ framework�� resource ��� => KT
 - strings_dp.xml ��� (framework/base/core, package/apps/phone, package/apps/settings) => SKT
*/
#define FEATURE_SKY_DS_RESOURCE

/*
 - easy setting ��� �߰���, socket data moe �����ϴ� �κп��� intent broadcast ����� ��.  
 - SKT �� KT �԰� ���̷� data mode setting �ϴ� �κ� ����.
*/
#define FEATURE_SKY_DS_EASY_SETTING

/*
 - �����ͷι� üũ �� �˾����� ���� off �ǰ� Ȧ�� �����Ͽ� �˾� ��� ���ý� üũ���� �ʴ� ���� ����
*/
#define FEATURE_SKY_DS_FIX_ROAM_CHECK_UI_BUG

/*
- WIFI Connected���¿��� 3G/LTE Data�� 
���ӵǾ 3G/LTE Icon�� Display ���� �ʾ� ����.
-NetworkController.java, SignalClusterView.java
*/
#define FEATURE_SKY_DS_SHOW_DATA_ICON_DURING_WIFI_CONNECTED

/*
 - Null pointer exception ����
*/
#define FEATURE_SKY_DS_CHECK_NULL_POINTER_EXCEPTION

/************************************************************************************************************************
**     3. CTS / PortBridge / DUN / Log /vpn
************************************************************************************************************************/


/* 
- Data Manager ���� ó��. 
- AT$SKYLINK command �� data manager �����Ű��, 
- /dev/pantech/close file �� ������ �����Ǹ� data manager �� ����� ������ ó���Ѵ�. 
-/port_bridge/ , skydunservice.java
*/
#define FEATURE_SKY_DS_DATAMANAGER 

/* 
-AT*OBEX*EXEC
-AT*SYNC*UMS
-AT*SIM*INFO
*/
#define FEATURE_SKT_DS_SYNC_MANAGER

/* 
-EF39S����, Qualcomm�� �����ϴ� ATFWD_daemon�� �����.
-SkyDunService.java ���� �� Service ���� ����.
*/
#define FEATURE_SKY_DS_ATFWD_PROCESS

/* 
 - root process issue �� devices.c, init.rc, init.qcom.rc ���� ������ ����. 
 - cnd, netmgrd, port-bridge, qmuxd
  port_bridge �� ��� ������ code ���Ǿ�� �Ѵ�.
 - init.rc Ȥ�� init_�𵨸�.rc ���Ͽ��� /dev/pantech directory �� system �������� ����������Ѵ�. 
*/
#define FEATURE_SKY_DS_CTS_ROOT_PROCESS

/*
 - Ư�� VPN ���� ���� �ȵǴ� ���� (���� : android ��  SSL VPN �� Cisco VPN ������)
 - external\mtpd\L2tp.c �� kernel config(kernel\arch\arm\configs\Ĩ�̸�_������Ʈ�̸�_�ϵ��������_deconfig) 
   ���� �̹� define�� ������ �ּ�ó���ϰ� y�� ���� )
 - ICS ���׷��̵� �ϸ鼭 �ϴ� Kernel config�� BLOCK
*/
#define FEATURE_SKY_DS_VPN_FIX

/*
- CTS testTrafficStatsForLocalhost test �� ���� kernel config(kernel\arch\arm\configs\Ĩ�̸�_������Ʈ�̸�_�ϵ��������_deconfig) �� CONFIG_UID_STAT=y �� ����. 
- ICS ���׷��̵� �ϸ鼭 �ϴ� Kernel config�� BLOCK
*/
#define FEATURE_SKY_DS_CTS_LOCALHOST

/*
-  usb tethering/wifi hotspot �� google dns ���� ������� �Ϻ� ����Ʈ ������� �ʴ� ���� 
- ConnectivityService.java  tethering.java
*/
#define FEATURE_SKY_DS_SET_TETHERED_DNS

/*
- SUID File Finder���� ip�� SUID�� Check�Ǿ� Fail�Ǵ� ����
- 80-N6956-2_A ���� ����
*/
#define FEATURE_SKY_DS_CTS_SUID_CHECK

#define FEATURE_SKY_DS_REMOVE_DBG_RMNET

/* ######################################################################### */


/*****************************************************
    SKT �� �������
    Feature Name : T_SKY_MODEL_TARGET_SKT
******************************************************/

#ifdef T_SKY_MODEL_TARGET_KT
#error Occured !!  This section is SKT only !!
#endif

/************************************************************************************************************************
**    1. Related 3G-connection
************************************************************************************************************************/
/*
 - 3G(GPRS) Data Suspend/Resume �Լ�
 - GSMPhone�� disableDataConnectivity/enableDataConnectivity�� PLMN ���� �˻��� Ȱ���ϸ� ������ �־� ���ο� �Լ� �߰�
*/
#define FEATURE_SKT_DS_ADD_DATA_SUSPEND_FUNC

/*
 - Roaming�� APN ���� (lte.sktelecom.com-> roaming.sktelecom.com)
   -> Roaming ������ �����ϸ� telephony.db�� �ش� APN�� roaming.sktelecom.com���� ����
      ������ ������ �ٽ� lte.sktelecom.com���� ����
      ������ ���� �Ұ����� Default APN�� DB���� ���� ������.
*/
#define FEATURE_SKT_DS_ROAMING_APN_CHANGE

/*
 - SKT : WCDMA �ܸ� QA �䱸���� 
 - CS Call �߿��� PS Data�� Block�Ͽ� Call Drop�� ���� �Ѵ�.
*/
#define FEATURE_SKT_DS_VOICE_CALL_PROTECTION_IN_CS_CALL


/************************************************************************************************************************
**    2. Related MENU / UI
************************************************************************************************************************/
/*====================== (1) 3G ���� ���� UI ======================*/

/*
 - 3G Data On/Off �޴� �߰�
 - AlwaysOnSettings.java, AndroidManifest.xml, wireless_settings.xml, strings.xml(KO)
 - CheckBoxPreference �������� ���� (100326, WirelessSettings.java)
 - �ó����� ���� (�䱸 ���� ����, 0510)
   : ����, ����, ���ý� ��� (Checkbox) �������� ����
*/
#define FEATURE_SKT_DS_ADD_ALWAYSON_MENU
   
/*
 - PS Disable �޴� �߰� (SKT �䱸 ����)
 - System Value �߰� (SKY System)
 - PS Detach/Attach ���� �߰�
 - PDP Activate/Deactivate ���� �߰�
 - mMasterDataEnabled ���� (Eclair ���� �������� �߰�)
   : Disable ���¿��� �� ������ �ٽ� On�� ��Ű�� mMasterDataEnabled�� enabled�� �����Ͽ� ȣ�� �ö��� �ʴ´�.
   : Eclipse���� dataEnabled ������ setDataEnabled�� �⵿ ���� enableApnType ����
   : �Լ� ���� �� mMasterDataEnabled ���� �ǹ̰� ���� ���� ���� �ڵ� ����
 - Concurrent�� ������ dataEnabled ������ �浹�Ǵ� ������ ����
   : isDataConnectivityPossible�� getSocketDataEnableSKT()���� �� �ϵ��� ����
   : isDataConnectivityPossible�� Android �⺻���� �ΰ� �Ʒ� �ڵ忡�� ���´�.
 - WIFI OFF �Ǵ� WIFI ON���� �� ����(WIFI ����ȵ� ����)�� ��� reconnect���� �õ��ϴ� ��찡 �־�
   enableApnType���� mms�� �����ϰ� getSocketDataEnableSKT�� �˻��Ͽ� ����
 - MobileDataStateTracker�� mEnabled ������ reconnect �õ��ÿ��� True�� �Ǵµ� 
   Framework �ܿ��� enableApnType Ȥ�� setDataEnabled�� �̿��Ͽ� PDP�� �ø� ��� �ش� ������ true�� ������ �ȵǾ�
   ConnectivityService���� State Change Event�� ���� ����
   �� ��� WIFI�� �پ� �ִ� ���¿��� Default Network�� Always On �޴��� ���� ��� ���� ���� Network�� Disconnect��
   �ȵǴ� ������ �߻�
   Default�� ������ �ٸ� Network(MMS, SUPL ��)�� reconnect���θ� ���� �����ϹǷ� �ش� ������ ��� ����
   -> MobileDataStateTracker���� Default Network�� ���� Connecting, Connected Event�� �߻��� ��� mEnabled�� True�� �����ϵ��� ����
 - API rename : void setDataConnectionMode( boolean mode) / boolean getDataConnectionMode() : 10.08.19
 - 3G OFF���� MMS ���߽� �� 3G OFF���� �ʴ� ���� ����
   : 3G ON���·� ����� �� 3G ON/OFF �˾����� 3G ���� ��ư�� ������ DataServiceType�� DEFAULT Ÿ���� enabled�� ��������(EF39S���� disableApnType �Լ� �������� ����)
   : �� ������ ���� 3G OFF���¿��� MMS��/�߽��� ���� �Ŀ��� StopUsingNetworkFeatureOEM�� ���� 3G OFF�� ���� �ʾ� disableApnType ������.
*/
//#define FEATURE_SKT_DS_PS_DISABLE_FOR_SKT
#define FEATURE_SKT_DS_DATA_CONNECTION_API // �̸� ���� (EF39S)
 
/*
 - SKT �䱸���� : 3G Data �� Popup���� ����ڿ� Noti�Ͽ��� ��
 - trySetupData�� Popup ó��
 - Always On Menu ����
 - GsmDataConnectionTracker���� WIFI Status�� ���� �ִ� �Լ� �߰�
   : ������ �ִ� mIsWifiConnected�� wifi broadcast�� �����Ǵ� �̴� trySetupData ���Ŀ� ó���Ǿ� Timing Issue ����
   : �� �ó����� Ȯ���� isWifiConnected �Լ��� �̿��Ͽ� WIFI ���� �˻� ��ƾ �߰� ����
 - �޴� Popup ���ý� �ٷ� Popup Value�� �������� �ʰ� Dataȣ �õ� �� �����ϵ��� ����
   (Popup 2ȸ �߻� ������)
 - Connection Popup���� '�ƴϿ�' ���ý� Disable ���°� Suspend ���°� �ǵ��� ����
 - SKT ������ POP UP ó�� ���ϰ� ����/���� 2���� �ó������� ���� �ϵ��� ���� (2010.03.25)
   -> EFS ������ ���� Data �õ� �ÿ��� Pop-UP �߻� �ϵ��� ���� (NEW_100326)
   -> GSM setupwizard�� �ִ� ���� ���� ������ apk ���·� �޾� ����δ� �Ұ��� (DS2�� ������)
      : Google���� �Ұ� �뺸
 - PLM : 7661 ������(SetupWizard �״� ����)�� ���� Boot Complete ���ķ� �̵�
 - Boot Complete�� �ȿ��� ��� 1ȸ �߻� (�� ����� ������ Data Call �ȵ�)
   : Menu���� Enable�� Boot-up ���� Flag Reset�ϵ��� ����
 - SKT �ι� �ó����� �������� attach ���ķ� �˾� �߻��ϵ��� ����.(2010.10.05)
*/
#define FEATURE_SKT_DS_ADD_3G_DATA_POPUP

/*
 - Booting�� POP-UP���� ���忡�� ������ ����
 - ���� ��û���� IMEI�� ���� ��� POP-UP �߻� ���ϵ��� ����
 - Call Part �۾� �ʿ� (qcril_other.c, ds1_cp_pantech_factory_req)
 - ���� ��� �߰�
 - PS attach ���� �˾��� �߹Ƿ� sim üũ ������ (11.04.11)
*/
#define FEATURE_SKT_DS_NO_CONNECTION_POPUP_IN_NOIMEI

/*
 - Silent Boot�� Popup ������ �ʵ��� ����
 - FEATURE_SW_RESET_RELEASE_MODE�� DS2������ �� ���� �Ǿ�� �Ѵ�.
*/
#define FEATURE_SKT_DS_SW_RESET_RELEASE_MODE_NO_DATA_POPUP

/*
 - 3G Data �õ��� Toat Popup ��� �ϵ��� ���� 
*/
#define FEATURE_SKT_DS_MAKE_PDP_CONNETION_TOAST

/*
 - PS attach reject �ް� 3G ���� �õ��� reject �˾�
 - detach �õ��� ps reject cause ���� => SBSM �䱸���� �������� detach ���� ����.(10.10.19)
 - 3G only app�� �����Ƿ� startUsingNetworkFeature() �Լ����� üũ�ϴ� ���� �����ϰ�, RTS �׽�Ʈ�� ���ؼ� 
   ������ �ι� ���� �˾����� ����� ������ ��쳪 ���� �޴����� �ι� ������ üũ�� ��� PS reject cause �˾�(10.10.19) 
*/
#define FEATURE_SKT_DS_PS_REJECT

/*
 - Wifi off�μ� data���� ��, wifi interface name�� ���� ���� ���ؼ� wifi connection�� �������� �ʴ� ����
 - Current interface name�� �ִ� ��쿡 �����ϵ��� ����
*/
#define FEATURE_SKT_DS_RESUME_DOWNLOAD_FOR_WIFI_TO_DATA_CHANGE
 
/*====================== (2) �ι� ���� ======================*/

/*
 - ���� �� �ι� ��� �˾� 
 - �ι��� ���, �ι� üũ ���θ� Ȯ�� ��.
 - ���� �ҽ����� 3G ���� ��� ���θ��� üũ�ϴ� �κп� �ι��� ���, �ι� üũ ���θ� Ȯ�� �ϵ��� �߰���.
 - ���� ���¿��� �ι� �������� ������ ���, PS attach �ϱ� ���� ��� ��ȯ��.
 - DS1_DATA_FRAMEWORK_GPRS_DIABLE ������.
   �ι� �� 3G ���� ���� ���� �ǹ̰� ��������, �ι� ���� ������ always on ������ �ϰ� �ǹǷ�, GSM ���������� enable ��. 
   PS reject�� ������ �޴��� disable �ǰ�, 3G ���� (MMS)�� �ϸ� 3G ���� ������ �϶�� �˾��� �߻���.  
   PS attach reject ������ �޴��� disable �ǰ�, �� ���, ȣ �õ��� ���� �ʾ� SKT RTS �׽�Ʈ�� fail ��. 
 - ���� ���¿��� �ι� �������� ������ ���, PS attach �ϱ� ���� ��� ��ȯ��. 
 - RTS ��� �׽�Ʈ �� PDP accept, reject�� �ݺ��ϸ� ���� �׽�Ʈ�� �� ���, ������ ���� permanent reject cause�� ��������
   ������ üũ, ��üũ�ص� ������ �õ����� �ʾ� �׸��� fail��. (2011.01.28)
   => setDataRoamingEnabled()���� EVENT_ROAMING_ON�� �߻� ��Ű��, onRoamingOn()���� roaming�� ���, ���� ���� ����
      data ������ ����, ���� �ϵ��� ������.
   => onRoamingOff()�� ���ý� �ҷ����� ������ onRoamingOff()�� ���� ���� �ڵ带 �ְ�, EVENT_ROAMING_ON/OFF�� ���� �߻� ��ų ���,
      ���� �� ȣ������ ���� ����.
*/
#define FEATURE_SKT_DS_ROAMING

/* - ������ �ι��� �ȵǴ� �������� 3G ���� �޴� disable��. (SKT �䱸����)
 - GSM / GPRS ������ disable ��.
 - �ι� �䱸������ ����Ǿ� �ι��� ���, ������ disable ��.
 - ���� �� ���� intent�� easy setting�� ���� ���ϴ� ��찡 �߻��Ͽ� �˾� ó�� ��ư click �� �� intent�� �ٽ� �߻���Ŵ
*/
#define FEATURE_SKT_DS_ALWAYSON_MENU_DISABLED_IN_GPRS

/*====================== (3) Application ���� ====================== */

/* - DUN Profile�� ��� startUsingNetworkFeatureȣ��� �������� �ʾƾ� ��
   * DUN Profile�� ��� EVENT_RESTORE_DEFAULT_NETWORK�� ȣ�� ���� �ʵ��� ����   

 - Froyo �������� config.xml�� networkAttributes arryay�� dun�� �����Ǿ� SKAF ������ �ȵǾ� mobile_dun �߰���.(10.09.08)
   * fetchDunApn() �Լ��� ����ϴ� �κ� ����.
     => EF30S�� ���, �ش� �κ� ����.
*/
#define FEATURE_SKT_DS_SKAF_SUPPORT

/*
 - SKT �䱸���� : 3G Data�� Disable �Ǿ MMS ��/������ ���� ���� �ؾ� ��
 - Data Diable�� �����Ǿ� �־ MMS ���Ž� PDP�� �ø��� �ֵ��� ����
 - �䱸 ���� �������� �ش� ��� ����
 - Data Disable�� MMS�̿ܿ� �ٸ� Network ��� �Ұ��ϵ��� ó�� �����ϹǷ� �ٽ� ����
 - 2010.04.08 �䱸���� �������� OEM MMS�� ��� �ϵ��� ���� : Disable�� OEM MMS�� ������ �ٸ� ��� Feature Disable �ϵ��� ����
 - ISkyDataConnectivity.adld�� requestRouteToHostOEM() �߰�(2010.09.06)
*/
#define FEATURE_SKT_DS_ALLOW_MMS_IN_DATA_DISABLE

/*
 - HD app ������ ���ؼ� VT / Voice call type ������ �ʿ���.
 - HD app ��ü���� isVideoCall() �Լ� ������ ��û�Ͽ� ������.
 - HD������ȭAPK �߰� (Pre-load ����)
   * android/pantech/apps/HDVideoCall ���丮 �߰�
   * HDVideoCall_LINK.apk�� HDVideoCall.apk ��ü Signing�� ��� (AIR �ٿ�ε�� Signing�� ��ġ�ؾߵ�)
   * �޴� -> HD������ȭ ���� Ŭ�� ��, HD������ȭ Re-Install �������� '��ġ�� ���ܵ�' �޼��� �����ʵ��� ó����.
     - android\packages\apps\PackageInstaller\src\com\android\packageinstaller\PackageInstallerActivity.java
 - EF33S���ʹ� T service�ȿ��� ����ǵ��� ����.
   * LINUX\android\pantech\apps\Tservice\src\com\pantech\apps\tservice\TServiceActivity.java�� activity����ǵ��� �߰�
   * LINUX\android\pantech\apps\Tservice\res������ draw �� values ���� � string �� icon �̹��� ��������.
     ����� icon �� string�� TServiceActivity.java�� �ִ� ������ �����ϵ���..
 - EF39S, EF40S�� LTE �ʱ� �ܸ��μ�, ��ž��� �����Ǿ �ش� Anroid.mk���� ������ featuring�� �κ� �ּ� ó����.
   ��, T serive�� ����� string�� icon�� �״�� ������.
 - 2012.07.21 SKT��û���� 33S ICS�������� HD������ȭ ��ó ����
*/
//#define FEATURE_SKT_DS_CALL_TYPE_FOR_HD_SERVICE


/*====================== 4. �׿� �޴� ======================*/

/* 
 - hidden menu���� RRC version ���ÿ� ���� category ������ �ǵ��� ������.
 - HSUPA category�� NV ó���� �Ǿ� ���� �ʾƼ� �߰���.
 - R4 only ���� �� HSDPA category / HSUPA category �׸� disable�� ������.
 - R5(HSDPA) ���� �� HSDPA category enable / HSUPA category disable�� ������.
 - R6(HSDPA) ���� �� HSDPA category disable / HSUPA category enable�� ������.
 - HSUPA�� �������� �ʴ� Ĩ�� ���, R6 ���� �� ���� ���µǹǷ� rrc version �������� R6�� �ݵ�� �����ؾ� ��. 
*/
#define FEATURE_SKT_DS_HSUPA

/************************************************************************************************************************
**     3. CTS / PortBridge / DUN / Log /vpn
************************************************************************************************************************/


/************************************************************************************************************************
**     4. VT
************************************************************************************************************************/
#define FEATURE_PANTECH_VT_SUPPORT

#define FEATURE_PANTECH_VT_SUPPORT_QMI

/************************************************************************************************************************
**     5. VoIP(SKT VoIP/TAPS)
************************************************************************************************************************/

/*
- TAPS�� ���� ����
- LINUX\android\pantech\apps\SkyTAPSClient ������ �̿��� TAPS���� ��� ���ĸ�
- ����(2010/11/11)������ TAPS ���� ����(VENT_INTERFACE_CONFIGURATION_SUCCEEDED)�� ���� ���븸 ����.
- ���� ��� �߰� �� feature�� �и��ʿ�
*/
#define FEATURE_SKT_DS_TAPS

/*
- VoIP registring/registered ���¿����� WiFi �������� �������� �ʵ�����
*/
#define FEATURE_SKY_DS_SKT_VOIP_BLOCK_WIFI_CUT_DOWN

/*
- ���� Off �� 3�ʰ� block�ϸ鼭 voip deregistering�õ�
- user�� wifi off �� 3�ʰ� blocking�ϸ鼭 voip deregistering�õ�
*/
#define FEATURE_SKY_DS_SKT_VOIP_USER_POWER_OFF_HANDLE

/*
- Airplane mode���� �� 3�ʰ� block�ϸ鼭 voip deregistering�õ�
*/
#define FEATURE_SKY_DS_SKT_VOIP_USER_AIRPLANE_MODE_HANDLE

/*
- VoIP ����׽�ũ��. ����ȭ���� ���������ʰ� WifiScerrn.java�� �߰���
*/
#define FEATURE_SKT_DS_VOIP_DEBUG_SCREEN

/*
- VoIP Test Menu �����ڵ常 ���ĸ��Ǿ��ְ�, LINUX\android\pantech\apps\SkyVoipTest ������ �߰��Ǿ�ߵ�����
- �����������, hidden string�� block��Ű����, SkyVoipTest���� xml�� �����ؼ� �ش� �޴��� disable��Ŵ.
- EF13S�� �ƿ� ���� ���� ���ϵ��� �߰�, EF30S�� ������ ������ �ش� �޴��� disable��. BMT�Ⱓ �߿� ���� voiptest.apk�� �����ؼ�
  �ش� �޴��� Ȱ��ȭ��Ű�� ����.
- �����ڵ��, ##362#(##fmc#)
*/
#define FEATURE_SKT_DS_VOIP_HIDDEN_MENU

/*
- FMC Configuration �޴����� TAPS/�������� ���������ϵ��� ����
- �������� �� TAPS���� üũ�����ʵ��� ����
- TAPS���� �� TAPS �ʱ�ȭ �� ������ϵ��� ����
- fmcconfig.xml ���� TAPS ���� üũ�ڽ� disable��Ų�κ� ����
*/
#define FEATURE_SKT_DS_VOIP_MANUAL_CFG

/*
- GingerBread���� ž��� SIP�� ������� �ʵ��� ����.
- LINUX\android\device\qcom\common\common.mk �Ǵ� LINUX\android\device\qcom\msm7627_surf\msm7627_surf.mk�� �����Ѵ�.
- EF31S�� MSM7627 �̹Ƿ�, msm7627_surf.mk�� �ش�ȴ�. �𵨸��� surf mk ������ �ٸ� �� �ִ�.
*/
#define FEATURE_SKY_DS_BLOCK_GB_BUILTIN_SIP

/*
- VoIP provider�� ����ϱ� ���ؼ� LINUX/android/framework/base/Android.mk ���Ͽ� �߰�
- VoIP provider�� ������ ��ο� ���� ����Ǿ� ����.
*/
#define FEATURE_SKY_DS_APPLY_VOIP_PROVIDER

/*
- voip application�� ������ ������ �� ��� �����ϴ� process�̴�. ��, applicaton process�� �
�������� �ٽ� ����� ����, ó�� ������ ���� �ٸ� routine�� Ÿ�� �Ѵ�.
����, ó�� ������ �� ����Ǿ�����, �ƴϸ� �� ����Ǿ������� check�ϱ� ���ؼ�,
file system�� /data/voipdone/voip_done�� ���� �����μ� �� �� �ְԲ� �� ���Ҵ�. �� �κ���, init.rc�� ���� �迭��
file�� �����Ǿ� �ִ�. VoIPApp.java�� onCreate�κп��� voip_done file�� ������ üũ�ϴ� flow�� �ִ�.
*/

/*
- EF31S, 39S, 40S�� VoIP ��ž��� ��õ�.
- ����, ���� featuring�κ��� ������, ������ �����Ǿ� �ִ� �κ��� Android.mk���� ���带 ����.
- Android.mk���� ���� �κ��� �Ʒ� feature�� ã���� ��.
*/
#define FEATURE_SKY_DS_BLOCK_VOIP

/************************************************************************************************************************
**     6. GingerBread SIP
************************************************************************************************************************/
/*
 - SKB�� regi�� ���� SIP header�� from/to header�� portó�� ������.
*/
#define FEATURE_SKT_DS_SIP_PORT_DEL

/*
 - SKB regi ������ ���� REFRESH�� ������.
*/
#define FEATURE_SKT_DS_SIP_REGI_REFRESH



/* ######################################################################### */
/*****************************************************
    KT �� �������
    Feature Name : T_SKY_MODEL_TARGET_KT
******************************************************/
#ifdef T_SKY_MODEL_TARGET_KT
#ifdef T_SKY_MODEL_TARGET_SKT
#error Occured !!  This section is KT only !!
#endif

/************************************************************************************************************************
**    1. Related 3G-connection
************************************************************************************************************************/

/*
 - 3G(GPRS) Data Suspend/Resume �Լ�
 - GSMPhone�� disableDataConnectivity/enableDataConnectivity�� PLMN ���� �˻��� Ȱ���ϸ� ������ �־� ���ο� �Լ� �߰�
 - getDataConnectionState() ���� connected�� �ƴϸ� ���� disconnected �� return �ؼ� connecting ���¿��� �����˻� ����Ǵ� ������ connecting �߰�.
*/
#define FEATURE_KT_DS_SUSPEND_RESUME_FUNC

/*
 - KTF �䱸���� : 3G Data�� Disable �Ǿ MMS ��/������ ���� ���� �ؾ� ��. 
 - Data Diable�� �����Ǿ� �־ MMS ���Ž� PDP�� �ø��� �ֵ��� ����
*/
#define FEATURE_KT_DS_ALLOW_MMS_IN_DATA_DISABLE

/*
- �ش� ���� ���� ��� true�� ó�� �ϵ��� ����
*/
#define FEATURE_KT_DS_CHANGE_SDC

/*
 -KT 3G Data ���� �ó����� ���� =>> system property ���� db �� SOCKET_DATA_CALL_MODE �� �����ؼ� ����. kaf oem api 0.9.0 �� default ���� popup ���� �䱸��.
- setup alert popup ���� ���� ���ý� data mode setup ȭ������ �̵�.
- data mode setup ȭ���� skydatamodesettings.java �� ������. => \packages\apps\Phone\src\com\android\phone\settings.java �� ����.
*/
#define FEATURE_KT_DS_DATA_SETUP

/*
 - data/dun setup �������� üũ�� KT PS reject cause üũ �� toast. 
 - ��Ʈ��ũ ������� ��쿡�� toast ó���ϰ� �߽Žõ��ؾ���. skydunservice.java
*/
#define FEATURE_KT_DS_PS_REJECT

/*
 - 3G OFF ���¿��� MMS ���۽� DNS ����  IP add  ����� NULL�� �Ѿ� ���� ���� �߻�. 
 - unknownhost�� ��� cache �� ������� �ʵ��� �ּ� ó��. 
*/
#define FEATURE_SKY_DS_JAVA_CACHE

/************************************************************************************************************************
**    2. Related MENU / UI
************************************************************************************************************************/
/*
  packages\apps\Phone\src\com\android\phone\settings.java �� network_settings.xml ���� ó���ϵ��� �����. 
*/
#define FEATURE_KT_DS_ADD_ALWAYSON_MENU

/*
 - EF18K IOT 1�� LMS 1, SBSM 8 ��û ���׿� ���� MMS TestMenu �߰� ��û�� ���� ##46632874# > �����Ͼ��忡 �߰� ��.
 - \LINUX\android\packages\apps\Settings\src\com\android\settings\skyhiddenmenu\KtHiddenMenu.java
 - \LINUX\android\packages\apps\Settings\res\xml\kt_hidden_menu.xml
 - \LINUX\android\packages\apps\Settings\res\values\strings_cp.xml
*/
#define FEATURE_KT_MMS_TESTMENU

/*
  - Lab Test Menu�� vt emulator �޴� �߰��Ͽ� ext 324 NV ������� �߰�
*/
#define FEATURE_KT_DS_VT_EMULATOR

/*
- connectivityservice.java ���� tryFailover() ���� reconnect �� �� mobile data enable �Ǿ��ִ��� üũ�ϴ� �κ� kt data mode �� ������.
*/
#define FEATURE_KT_DS_DATAMODE_CHECK_MODIFY

/*
- lock ���¿��� incoming call ���ŵ� ���¿��� wifi ���� ����Ǿ� data pop ǥ�õǰ� ���� �����ϸ� lock ȭ�� ���̴� ����.
- telephonyintent �� ringcall start/end �߰��Ͽ� broadcast �ϸ� data popup���� ringing �̸� �����޴� ���Ը��ϰ���. 
*/
#define FEATURE_KT_DS_POPUP_IN_RINGSCREEN_BUG

/* 
- Roaming �� data roaming enable uncheck �����̸� notification ������ �����ְ� �������� �ʵ��� �Ѵ�.
- ������ ���� �� ���̵��� ��, ���ý� ���� �޴��� �̵�. 
*/
#define FEATURE_KT_DS_ROAMING_SETUP



/************************************************************************************************************************
**     3. CTS / PortBridge / DUN / Log
************************************************************************************************************************/
/*
: KT OTA command ó�� "AT*KTF*OPENING" ./port_bridge/ , skydunservice.java
*/
#define FEATURE_KT_DS_EIF_OTA 

/*
  - CS only �� ��� DUN ���� �õ����� ���ϵ��� ��.
  - mmdataconnectiontracker.java ���� ps restricted �� ��� 
  gsm.net.psrestricted property �� 1�� ���ְ� skydunservice ���� �� ���� üũ�Ѵ�.
*/
#define FEATURE_KT_DS_DUN_BLOCKING_IN_CS_ONLY

/************************************************************************************************************************
**     4. VT
************************************************************************************************************************/

/*
- KT ������ȭ �ܸ� �԰� disconnect cause �߰�, qcril ������ undefine �� �ָ� �ȴ�. 
- local ringback tone ���� call progress info(#1,#2,#3,#8) üũ �� �߰�. 
*/
#define FEATURE_PANTECH_VT_SUPPORT

#define FEATURE_PANTECH_VT_SUPPORT_QMI

#endif/* T_SKY_MODEL_TARGET_KT */


/************************************************************************************************************************
** ������ feature
************************************************************************************************************************/

/*  
#define FEATURE_SKY_DS_PRESERVATION_WAKEUP_BUG_FIX
=> FEATURE_SKY_DS_NO_SERVICE_BUG_FIX �� ����. 
- Preservation ���¿���  RA update �߿� rrc abort �� limited event ���� �� ���� Preservation �������� ���ϴ� ���� ���� 
*/

/*  
#define FEATURE_SKY_DS_CNE_DISABLE ==> Ǯ��� ��. 
 => CNE ������. 
 - 2030 �������� CNE enable �Ǿ� WIFI����� 3G ������� �ʴ� ������ �߻�.
 - CNE �κ� �ӽ÷� �ּ� ó��. 
*/

/*
#define  FEATURE_SKY_DS_STABILITY_TEST
 =>  cust_sky.h �� FEATURE_PANTECH_STABILITY �� featuring ��. 
*/

/*
#defien FEATURE_SKY_DS_ADD_DATA_LOG
- framework �� �α� �߰� ����, ������. 
*/

/*
#define FEATURE_SKY_DS_CHANGE_MASTER_VALUE_TURE
 - mMasterDataEnabled�� false�� �Ǿ� Dataȣ�� �õ� ���� ���ϴ� ���� ����
 - ������ ��ư� mMasterDataEnabled�� ��� eclair ���� �� ���� �ǹ̰� ���� Dataȣ �õ��� �ش� Value üũ ���� ���� 
   =>3G ���� ���̳� �ι� ���� ���� �ݿ��Ϸ��� ������, ���ܽ� MMS �߽� ������ ������ true�� �����ϵ��� ����.
*/

/*
#define FEATURE_SKY_DS_FAIL_CAUSE
 - PDP Fail cause �� �������� �ʴ� ������ ���� �ڵ� ����.
 - EF39S ���� ������
*/

/*
#define FEATURE_SKY_DS_CHANGE_IN_AVAILABLE_CHECK_IN_STARTUSINGNETWORK
 - ���������� dataConnectionChanged Action���� ����Ǵ� Network Info�� isAvailable ���� false�� ����Ǿ� �ִ� ��� �߻�
 - �� ������ 1.sim, 2.roaming, 3.���� ����, 4.PDP ���� ���� (Default Enable , DISCONNECTED)�� Check�ϴµ� 
   4�� ������ ��� NATE ��� PDP�� �ٽ� Activate�� ��Ű�� ����� ����� ���Ǹ� ���� �����Ƿ� ���� ���� 
*/

/*
#define FEATURE_SKY_DS_CHANGE_DEFAULT_ROUTE_FOR_MOBILE
 - WIFI �� 3G ����� default router�� 2�� ������ ���� ����
 - WIFI, Data ���� ���¸� ��� Ȯ�� �ϱ� ���Ͽ� dhcpclient���� add route�ϴ� ������ framework�� �̵� (ConnectivityService)  
 - 3G Data�� WIFI ����� ���� 3G Default Network ����
 - default route add/remove function MobileDataStateTracker.java ���� ó���ϵ��� ����.
 - 3G connected event broadcast �� �� ��config ������ interface up ���� �ʴ� ������ broadcast ���� interface up check. 
   (�������� ���¿��� �ʱ�ȭ �� ���� �ڵ� �ٿ�ε� ���� �ʴ� ����.)
 - 3G ���� �Ŀ��� config �� ������ ���� �� interface down ���� ����Ǿ� check �ϴ� �κ� �߰�. (tethering ���� ����)
 -[KTF] remove dns route �������� �ʴ� ������ mIPv4InterfaceName, mIPv6InterfaceName �� disconnect ���� null �� ����� �κ� ����. 
 
 - addDefaultRoute()���� mDefaultRouteSet[index] == false�� üũ ���� �ʵ��� ����(2011. 02. 11)
   => Disconnect state�� ������� �ʴ� ��찡 �߻��Ͽ�, handleConnectivityChange() �Լ��� Ÿ�� �ʴ� ���, mDefaultRouteSet[index]
      ���� false�� ������� �ʾ� ���� ������ ������ ���� ����.
*/

/* 
#define FEATURE_SKY_DS_AVOID_FATAL_EXCEPTION
 - PDP Fail �� loggable fail cause �̸� logging ���涧 �ܸ� �״� ������ isEventLoggable() ���� �׻� false �����ϵ�����.
*/

/*
#define FEATURE_SKY_DS_DISCONNECT_CHECK
 - radio off event �߻��� ���(rild dead or lpm or rpc reset..etc) data disconnect ���Ѽ� radio on �� ��� ������ �ϵ��� �����ڵ� �߰�.
 - mmdataconnectiontracker.java onRadioOff()
 - FEATURE_KT_DS_DISCONNECT_CHECK ���� ���� feature �� ����. 
*/

/*
#define FEATURE_SKY_DS_DNS_CONFIG_BUG_FIX
- starUsingNetworkFeature�� ���� Feature�� 2���� APP���� ȣ���� ���
  2��° APP���� DNS Query�� 3G�� ������ ���ϴ� ���� ����
*/

/*
#define FEATURE_SKY_DS_PARAMS_BUG_FIX
- tearDownData()�� �Ķ���Ͱ� �߸� �Ǿ� ������. 
*/

/*
#define FEATURE_SKY_DS_APN_MMS_BUGFIX
 - �ܸ� ���� �޴��� "�� APN"(default.ktfwing.com) �߰� ����, 
 - MMS �޽��� �߽� �� (WIFI ON/3G ON) APN Ȯ�� �� �⺻ APN�� �����ϰ� �ִ� ���� ����.
*/

/*
#define FEATURE_SKY_DS_ANY_DATA_INTENT_RECOVERY
- ACTION_ANY_DATA_CONNECTION_STATE_CHANGED intent �� ���޵��� �ʴ� ��찡 �߻��Ͽ�
   intent broadcast(notifyDataConnection) �� connectivityservice �� update �� �Ǿ����� üũ.
 - dataconnectiontracker.java mmdataconnectiontracker.java
*/

/*
#define FEATURE_SKY_DS_TETHERING_HELP
 - �״��� ���� ���򸻿� ���� �ִ� URL�� Nexus One �����̹Ƿ� �ش� ���� ����(�������)
 - Wifi hotspot�� ���� ������ Wifi ���͸����� ����Ǿ� �־� ������.(�ѱ� ����, QE ������)
*/

/*
#define FEATURE_SKY_DS_ADD_NETTEST
 - network interface, APN, socket, Concurrent(3G/WIFI) ���� �׽�Ʈ APP �߰�
 - WIFI Debug Screen �߰�
 - android/pantech/apps/skyLabTest ���� 
 - android/pantech/apps/NetTest ����
*/

/*
#define FEATURE_SKY_DS_TETHER_STATE_INIT
 - tether setting ���� oncreate �� �ʱⰪ update   
    tethersettings.java
*/

/*
#define FEATURE_SKY_DS_DEFAULT_DATA_ICON
- Data ���� ICON default ���� 3G �� �����Ͽ� G �������� ������ �ʵ��� ����. 
*/

/*
#define FEATURE_SKY_DS_PORTBRIDGE_EXTERNAL
 - port_bridge(dun ����) ó�� ���� feature. ./port_bridge/ , skydunservice.java 
 - �ʱ� ���ý� dun_ext_smd_ctrl���� TIOCMGET�� ���� ������ ������ dun_monitor_ports�����尡 ���۵��� ����. (TIOCMGE���� ���� �����尡 ���� ����) 
 - dun_port_dataxfr_up �����尡 ������ �ʰ� ���鼭 CPU�� ��κ��� ������.
 - MODEM�� TIOCMGET������ �����Ǳ� ���� dun_monitor_ports �����尡 ���� �Ǹ� �ٽ� �����尡 ���� �ǰ� ����.
 - EF39S���� �� �̻� ������� ����.
*/

/*
#define FEATURE_SKY_DS_IDLE_PDL
-AT*PHONEINFO command �� PDL command �����Ŵ. system servier�� command ����.
-idle download support
*/

/*
#define FEATURE_SKY_DS_DUN_USER_MODE 
 - ������ : QualcommSetting ���丮�� �ִ� ���ϵ��� user mode �� ������� �����Ƿ�, dun, sync manager, data manger, curi explore�� ������� ����.
 - DunService.java ��� LINUX\android\packages\apps\Phone\src\com\android\phone\SkyDunService.java�� �߰���.
 - SkyPhoneBroadcastReceiver.java ���� dun service start �ϰ�, Dun_Autoboot.java������ ���� start �ϴ� �κ��� ����.
 - QualcommSetting\AndroidManifest.xml���� dun service�� �����ϰ�, packages\apps\Phone\AndroidManifest.xml�� sky dun service �߰�
 - EF39S���� �� �̻� ������� ����.
*/

/*
#define FEATURE_SKY_DS_DUN_SERVICE
  - dun ������¸� mmdataconnectiontracker.java ���� �����ϰ� state �� return �Ѵ�.
*/

/*
#define FEATURE_SKY_DS_RELATED_DUN_UI
 - ��ȭ���� ���� �� ����/���� �� toast�� ����/���� �˸�
 - notification ������ ���� �� �������� �˸�
 - port_bridge���� SkyDunService.java���� ui ó���� �ϱ� ���ؼ� DUN_EVENT_RMNET_DOWN�� ��쿡�� dun_disable_data_connection()���� dun file�� DUN_INITIATED�� write ��.
 - port_bridge���� SkyDunService.java���� ui ó���� �ϱ� ���ؼ� DUN_EVENT_RMNET_UP�� ��쿡�� dun_enable_data_connection()���� dun file�� DUN_END�� write ��.
 - 3G ���Ӱ� ��ȭ������ ���ÿ� �Ͼ ���, DUN_STATE_CONNECTED ���¿��� 3G ������ ���� �Ͼ ���, ��ȭ������ ������� �ʰ�, UI�� ���� ���� �ȴ�. 
   �̸� �ذ��ϱ� ���ؼ� DUN_STATE_CONNECTED���� DUN_EVENT_RMNET_UP �� ���, ��ȭ������ �����Ѵ�.
*/

/*
#define FEATURE_SKY_DS_DUN_TEST_MENU
 - Froyo �������� Tethering ����� �߰��Ǿ� ��ȭ ������ nettest �޴����� �����ؾ߸� ������ �� �ֵ��� ������.
 - \LINUX\android\pantech\apps\NetTest\src\com\pantech\app\nettest\DunTest.java �߰� 
 - \LINUX\android\pantech\apps\NetTest\res\layout\duntest.xml �߰� 
 - [kt] ��ȭ ���� �״��� ���� �������� ���� -  android\pantech\apps\nettest\AndroidManifest.xml ������ �ּ� ó�� 
*/

/*
#define FEATURE_SKY_DS_WIFI_USB_TETHERING
 - USB tethering ���� wifi ���� �� ��� wifi �켱 ����ϵ��� config.xml �� tethering.java �� ���� �� �߰�. 
*/

/*
#define FEATURE_SKY_DS_AVOID_UNKNOWN_RADIO_TECH
- Radio Tech Unknown(Connected)�ϰ�� ����� �����ϳ� Brower���� Error Pop-up �߻��ϴ� ���� ����
*/

/*
#define FEATURE_SKY_DS_BAD_IP_CHECK
- IP, GW, DNS ���� ���� ������ ����
- Dataconnection.java���� �ش� ���� ���� ��� TearDown�ϵ��� ����
*/

/*
#define FEATURE_SKT_DS_NOT_SUPPORTED_IPV6_CONNECT
 - SUPPORT_IPV4, SUPPORT_IPV6�� ��� true�� �Ǿ� �־, trySetupDataCall()�� �� �� �ҷ����� ��.
 - ���� �ʾƵ� �𵩴ܿ��� �ι�° ȣ�� fail�� ���� ������ trySetupDataCall()�� �ѹ��� �ǵ��� ������.
*/

/*
#define FEATURE_SKY_DS_MOBILE_INFO_BUG_FIX
 - mobiledatastatetracker.java �� default route, dns ������ null �� ���� �Ǵ� ��� data reconnect �ϵ��� �����ڵ� �߰�. 
*/

/*
#define FEATURE_SKT_DS_DISCONNECT_ALL_NETWORK_FEATURE
 - AlwaysOnSetting �޴����� ���Ӿ����� �������� ��� MMS, GPS, NATE ���� ������̸� PDP �� �������� ����
 - startUsingNetwrokFeature�� ����� ��� APP�� ���Ͽ� stopUsingNetworkFeature�� ȣ���� �Ŀ� disableDataConnectivitySKT�� ȣ�� �ϵ��� ���� 
*/

/*
#define FEATURE_SKT_DS_IF_DOWN_IN_DOWN_STATE
 - ���� ����
    bring_down�� bring_up�� ���ÿ� �Ҹ��鼭 NET_LINK�� DOWN->UP�� ��.
    -> ���� Net�� �ٿ�Ǿ� netmgr state�� down�� �Ǿ ���� rmnet0�� iface�� up ���¸� ������
    -> �� ���������� bring_up�� �ϰ� rmnet0�� interface�� IFF_UP�� ���ѵ� UP -> UP ���� ����Ǿ� Kernel Event�� �߻����� ����.
    -> netmgr�� down state�� framework�� connecting state�� ���� �־� �� �� ���� ������ 3G Data�� ���� ����.
 - ���� ����
    Modem Interface�� Down�Ǿ��� �� ���� netmgr�� Down State�ӿ��� �ұ��ϰ� IFF_UP ���� �� ���� IFF_UP mask�� �����ϵ��� ����

*/

/*
#define FEATURE_SKY_DS_DEFAULT_ROUTE_RESTORE
 - mDefaultRouteSet[index]�� true�̰�, defaultGatewayAddr = 0 �� ��찡 ���� �߻��Ͽ�, SCREEN ON �ÿ� üũ�Ͽ� 
   defaultGatewayAddr�� 0�� ���� teardown => reconnect ��. 
*/

/*
#define FEATURE_SKT_DS_DISABLE_MASTER_VALUE_IN_TRY_SETUP_DATA
 - mMasterDataEnabled�� false�� �Ǿ� Dataȣ�� �õ� ���� ���ϴ� ���� ����
 - ������ ��ư� mMasterDataEnabled�� ��� eclair ���� �� ���� �ǹ̰� ���� Dataȣ �õ��� �ش� Value üũ ���� ���� 
   =>3G ���� ���̳� �ι� ���� ���� �ݿ��Ϸ��� ������, ���ܽ� MMS �߽� ������ ������ true�� �����ϵ��� ����. 
*/

/*
 - SKT : WCDMA �ܸ� QA �䱸���� 
 - �ѵ� ������ ���, Background ������ ȣ �õ� ����.
 - RRC release cause�� Pre-emptive release�� ���, ���� -> ���� �� ����ȭ ���� -> ��׶��� ������ uncheck��.
 - notification ������ �ѵ� ���� �ȳ� -> RRC release�� cause�� Pre-emptive �� �ƴ� ���, ��Ƽ ����
 - WIFI connected ������ ���, ����� ������� ���� ��Ŵ.
*/
/* #define FEATURE_SKT_DS_PRE_EMPTIVE_RELEASE */

/*
#define FEATURE_SKT_DS_DNSMASQ_DNS_FORWARD
 - SKT : WCDMA �ܸ� QA �䱸���� 
 - DNS MASQ�� �̿��� DNS Forward��� ����
*/

/*
#define FEATURE_SKT_DS_CHANGE_MTU
 - SKT : ǰ�� �䱸���� (EF39S)
 - ������ Fragmentation ������ ���� MTU Size�� 1440���� ����
 - �ӵ� ������ 1500���� ���� (�԰ݼ� Update�Ǹ� ���� ����, 110930)
*/

/*
#define FEATURE_SKT_DS_NOT_USE_THROTTLE_NTP
 - ���ʿ��� ��Ŷ �߻��� ���̱� ���� ThrottleService���� Sntp ������� �ʵ��� ��.
*/

/*
#define FEATURE_SKT_DS_MOVE_NETWORK_SETTINGS_MENU
 - ���� ���Ǹ� ���� VPN ���� �޴��� ����� ��Ʈ��ũ �������� ������.
*/

/*
#define FEATURE_SKT_DS_GSM_NOT_SUPPORT_GPRS
 - SKT �� �� GPRS�� �������� �ʴ� �𵨸� �����ؾ� ��. 
 - GPRS ���� ��� �ι� ���� �˾��� ����, ���� �õ��� ���� �ʵ��� ��.
*/

/*
#define FEATURE_SKT_DS_ALLOW_MMSONLY_APN_IN_DATA_DISABED
 - 3G���� ���� MMS �ۼ��� ������ Test Firmware SKT ��û���� ����
 - �ܸ����� 3G ���� ������ ������ ���, ���� ���ӵ� web.sktelecom.com APN�� �����ϰ�, mmsonly.sktelecom.com APN�� ���
 - MMS �ۼ����� �õ� �ÿ� PDP context�� �����ϰ�, �ۼ����� �Ϸ�Ǹ� PDP context�� ����
 - MMS client���� application�� ���� mmsonly.sktelecom.com APN�� ���� ���������� ������ ����
 - Test Binary������ MMS client���� App�� mmsonly.sktelecom.com APN�� ���� ���������� ���� ���
 - OME MMS�� ���� ����ϹǷ� FEATURE_SKT_DS_ALLOW_MMS_IN_DATA_DISABLE �ݵ�� �����ؾ� ��.
 - EF47S : OMA MMS �������� starUsingxxxOem ����, 3rth Party MMS�� 3G OFF���¿��� MMS���� �����ϵ��� ���� (SKT Sim)
         : isAvailable �Լ� ���� (SKT SIM, ���� �ϰ�� MMS�� ���Ͽ� 3G OFF������ true return �ϵ��� ����)
*/

/*
#define FEATURE_SKT_DS_HSPA_PLUS
 - R7(HSPA) ���� �� HSDPA category enable / HSUPA category enable �ǵ��� ����. 
*/

/*
#define FEATURE_SKT_DS_POPUP_ROTATION
 - 1. ���� - ���� �� ��Ʈ��ũ - ������ ��Ʈ��ũ �������� ���� ���� ������� ������ ���ýÿ� �ߴ� �˾��� ���θ��� �ٲ�� ������� ���� ���� 
 - 2. ���� - ���� �� ��Ʈ��ũ - ����� ��Ʈ��ũ - ������ �ι� üũ �� �ߴ� �˾��� ���θ��� �ٲ�� ������� ���� ����
*/

/*
#define FEATURE_SKT_DS_DUN_NUMBER
 - 1501�ε� ��ȭ������ �ǰ� ��.
*/ 

/*
#define FEATURE_SKY_DS_DEBUG_SCREEN
 - Data RX, TX count �Ͽ� debug screen�� ǥ����.
 - AARM, MARM ���� ǥ����.
*/

/*
#define FEATURE_SKT_DS_REMOVE_WIFI_EVENT_LOG
 - Becon �ֱ⸶�� WIFI Driver���� �ö���� Event�� ADB Log�� �����Ͽ� ������� �����
 - �ʿ� ���� �α� ����
 - Atheros Eclair Driver Patch ���Ͽ� Port-bridge�� DSC���� Message ���� ������ �߰� �Ǿ���
   �ش� Patch�� Message�� �����ִ��� �����Ͽ� ���� ���� �Ǵ�
   => wifi �α� ������ ����. 
*/

/*
#define FEATURE_SKT_DS_VT_EMULATOR
- VT ���� �ܸ��� ���, hidden �޴����� External 3G-324M�� �����ϱ� ���� ������.
- �� ���� FEATURE_SKY_DS_VT_EMULATOR�� define �Ǿ�� ��.
*/

#endif /* T_SKY_MODEL_TARGET_WCDMA */

#endif /* __CUST_SKY_DS_H__ */
