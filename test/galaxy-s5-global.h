struct cpuinfo_mock_file filesystem[] = {
	{
		.path = "/proc/cpuinfo",
		.size = 2052,
		.content =
			"processor\t: 0\n"
			"model name\t: ARMv7 Processor rev 3 (v7l)\n"
			"BogoMIPS\t: 2585.19\n"
			"Features\t: swp half thumb fastmult vfp edsp neon vfpv3 tls vfpv4 idiva idivt \n"
			"CPU implementer\t: 0x41\n"
			"CPU architecture: 7\n"
			"CPU variant\t: 0x0\n"
			"CPU part\t: 0xc07\n"
			"CPU revision\t: 3\n"
			"\n"
			"processor\t: 1\n"
			"model name\t: ARMv7 Processor rev 3 (v7l)\n"
			"BogoMIPS\t: 2585.19\n"
			"Features\t: swp half thumb fastmult vfp edsp neon vfpv3 tls vfpv4 idiva idivt \n"
			"CPU implementer\t: 0x41\n"
			"CPU architecture: 7\n"
			"CPU variant\t: 0x0\n"
			"CPU part\t: 0xc07\n"
			"CPU revision\t: 3\n"
			"\n"
			"processor\t: 2\n"
			"model name\t: ARMv7 Processor rev 3 (v7l)\n"
			"BogoMIPS\t: 2585.19\n"
			"Features\t: swp half thumb fastmult vfp edsp neon vfpv3 tls vfpv4 idiva idivt \n"
			"CPU implementer\t: 0x41\n"
			"CPU architecture: 7\n"
			"CPU variant\t: 0x0\n"
			"CPU part\t: 0xc07\n"
			"CPU revision\t: 3\n"
			"\n"
			"processor\t: 3\n"
			"model name\t: ARMv7 Processor rev 3 (v7l)\n"
			"BogoMIPS\t: 2585.19\n"
			"Features\t: swp half thumb fastmult vfp edsp neon vfpv3 tls vfpv4 idiva idivt \n"
			"CPU implementer\t: 0x41\n"
			"CPU architecture: 7\n"
			"CPU variant\t: 0x0\n"
			"CPU part\t: 0xc07\n"
			"CPU revision\t: 3\n"
			"\n"
			"processor\t: 4\n"
			"model name\t: ARMv7 Processor rev 3 (v7l)\n"
			"BogoMIPS\t: 3380.63\n"
			"Features\t: swp half thumb fastmult vfp edsp neon vfpv3 tls vfpv4 idiva idivt \n"
			"CPU implementer\t: 0x41\n"
			"CPU architecture: 7\n"
			"CPU variant\t: 0x2\n"
			"CPU part\t: 0xc0f\n"
			"CPU revision\t: 3\n"
			"\n"
			"processor\t: 5\n"
			"model name\t: ARMv7 Processor rev 3 (v7l)\n"
			"BogoMIPS\t: 3380.63\n"
			"Features\t: swp half thumb fastmult vfp edsp neon vfpv3 tls vfpv4 idiva idivt \n"
			"CPU implementer\t: 0x41\n"
			"CPU architecture: 7\n"
			"CPU variant\t: 0x2\n"
			"CPU part\t: 0xc0f\n"
			"CPU revision\t: 3\n"
			"\n"
			"processor\t: 6\n"
			"model name\t: ARMv7 Processor rev 3 (v7l)\n"
			"BogoMIPS\t: 3380.63\n"
			"Features\t: swp half thumb fastmult vfp edsp neon vfpv3 tls vfpv4 idiva idivt \n"
			"CPU implementer\t: 0x41\n"
			"CPU architecture: 7\n"
			"CPU variant\t: 0x2\n"
			"CPU part\t: 0xc0f\n"
			"CPU revision\t: 3\n"
			"\n"
			"processor\t: 7\n"
			"model name\t: ARMv7 Processor rev 3 (v7l)\n"
			"BogoMIPS\t: 3380.63\n"
			"Features\t: swp half thumb fastmult vfp edsp neon vfpv3 tls vfpv4 idiva idivt \n"
			"CPU implementer\t: 0x41\n"
			"CPU architecture: 7\n"
			"CPU variant\t: 0x2\n"
			"CPU part\t: 0xc0f\n"
			"CPU revision\t: 3\n"
			"\n"
			"Hardware\t: universal5422\n"
			"Revision\t: 000a\n"
			"Serial\t\t: 6b31294e2318004d\n",
	},
	{
		.path = "/system/build.prop",
		.size = 3804,
		.content =
			"\n"
			"# begin build properties\n"
			"# autogenerated by buildinfo.sh\n"
			"ro.build.id=LRX21T\n"
			"ro.build.display.id=LRX21T.G900HXXU1BOE2\n"
			"ro.build.version.incremental=G900HXXU1BOE2\n"
			"ro.build.version.sdk=21\n"
			"ro.build.version.codename=REL\n"
			"ro.build.version.all_codenames=REL\n"
			"ro.build.version.release=5.0\n"
			"ro.build.date=Thu May 21 11:03:12 KST 2015\n"
			"ro.build.date.utc=1432173792\n"
			"ro.build.type=user\n"
			"ro.build.user=dpi\n"
			"ro.build.host=SWDD6017\n"
			"ro.build.tags=release-keys\n"
			"ro.product.model=SM-G900H\n"
			"ro.product.brand=samsung\n"
			"ro.product.name=k3gxx\n"
			"ro.product.device=k3g\n"
			"ro.product.board=universal5422\n"
			"# ro.product.cpu.abi and ro.product.cpu.abi2 are obsolete,\n"
			"# use ro.product.cpu.abilist instead.\n"
			"ro.product.cpu.abi=armeabi-v7a\n"
			"ro.product.cpu.abi2=armeabi\n"
			"ro.product.cpu.abilist=armeabi-v7a,armeabi\n"
			"ro.product.cpu.abilist32=armeabi-v7a,armeabi\n"
			"ro.product.cpu.abilist64=\n"
			"ro.product.manufacturer=samsung\n"
			"ro.product.locale.language=en\n"
			"ro.product.locale.region=GB\n"
			"ro.wifi.channels=\n"
			"ro.board.platform=exynos5\n"
			"# ro.build.product is obsolete; use ro.product.device\n"
			"ro.build.product=k3g\n"
			"# Do not try to parse description, fingerprint, or thumbprint\n"
			"ro.build.description=k3gxx-user 5.0 LRX21T G900HXXU1BOE2 release-keys\n"
			"ro.build.fingerprint=samsung/k3gxx/k3g:5.0/LRX21T/G900HXXU1BOE2:user/release-keys\n"
			"ro.build.characteristics=phone\n"
			"# Samsung Specific Properties\n"
			"ro.build.PDA=G900HXXU1BOE2\n"
			"ro.build.hidden_ver=G900HXXU1BOE2\n"
			"ro.config.rm_preload_enabled=0\n"
			"ro.build.changelist=4521975\n"
			"ro.product_ship=true\n"
			"ro.chipname=exynos5422\n"
			"persist.sys.storage_preload=1\n"
			"# end build properties\n"
			"#\n"
			"# from device/samsung/k3g/system.prop\n"
			"#\n"
			"\n"
			"rild.libpath=/system/lib/libsec-ril.so\n"
			"rild.libargs=-d /dev/ttyS0\n"
			"\n"
			"#\n"
			"# system.prop for universal5422\n"
			"#\n"
			"\n"
			"ro.arch=exynos5422\n"
			"persist.hdmi.hdcp_enabled=1\n"
			"\n"
			"\n"
			"# LCD Density\n"
			"ro.sf.lcd_density=480\n"
			"\n"
			"\n"
			"\n"
			"# Multimedia property for Smart View\n"
			"media.enable-commonsource=true\n"
			"\n"
			"\n"
			"# VQG - User Agent Header for Video-Streaming Client\n"
			"net.streaming.rtsp.uaprof=http://wap.samsungmobile.com/uaprof/\n"
			"#\n"
			"# ADDITIONAL_BUILD_PROPERTIES\n"
			"#\n"
			"ro.hwui.texture_cache_size=50\n"
			"ro.hwui.layer_cache_size=34\n"
			"ro.hwui.path_cache_size=10\n"
			"ro.hwui.shape_cache_size=4\n"
			"ro.hwui.gradient_cache_size=2\n"
			"ro.hwui.drop_shadow_cache_size=6\n"
			"ro.hwui.text_small_cache_width=2048\n"
			"ro.hwui.text_small_cache_height=2048\n"
			"ro.hwui.text_large_cache_width=4096\n"
			"ro.hwui.text_large_cache_height=4096\n"
			"ro.config.tima=1\n"
			"ro.config.timaversion=3.0\n"
			"ro.opengles.version=196608\n"
			"ro.sf.lcd_density=320\n"
			"drm.service.enabled=true\n"
			"ro.hdcp2.rx=tz\n"
			"ro.secwvk=220\n"
			"ro.securestorage.support=true\n"
			"dalvik.vm.heapstartsize=8m\n"
			"dalvik.vm.heapgrowthlimit=128m\n"
			"dalvik.vm.heapsize=512m\n"
			"dalvik.vm.heaptargetutilization=0.75\n"
			"dalvik.vm.heapminfree=2m\n"
			"dalvik.vm.heapmaxfree=8m\n"
			"ro.build.scafe=americano\n"
			"ro.build.scafe.size=short\n"
			"ro.build.scafe.shot=single\n"
			"ro.build.scafe.cream=white\n"
			"ro.sec.fle.encryption=true\n"
			"security.mdpp=None\n"
			"ro.security.mdpp.ver=1.1\n"
			"ro.security.mdpp.release=4\n"
			"ro.security.vpnpp.ver=1.4\n"
			"ro.security.vpnpp.release=3\n"
			"security.mdpp.result=None\n"
			"ro.security.mdpp.ux=Enabled\n"
			"ro.security.reactive.triggered=false\n"
			"ro.error.receiver.default=com.samsung.receiver.error\n"
			"ro.config.ringtone=Over_the_horizon.ogg\n"
			"ro.config.notification_sound=S_Whistle.ogg\n"
			"ro.config.alarm_alert=Morning_flower.ogg\n"
			"ro.config.media_sound=Media_preview_Touch_the_light.ogg\n"
			"ro.security.reactive.active=1\n"
			"keyguard.no_require_sim=true\n"
			"ro.com.android.dateformat=MM-dd-yyyy\n"
			"ro.carrier=unknown\n"
			"ro.com.google.clientidbase=android-samsung\n"
			"ro.security.icd.flagmode=single\n"
			"ro.ril.hsxpa=1\n"
			"ro.ril.gprsclass=10\n"
			"ro.adb.qemud=1\n"
			"ro.smps.enable=true\n"
			"ro.setupwizard.mode=DISABLED\n"
			"ro.com.google.gmsversion=5.0_r2\n"
			"persist.sys.dalvik.vm.lib.2=libart.so\n"
			"ro.build.selinux=1\n"
			"dalvik.vm.isa.arm.features=div\n"
			"ro.config.knox=v30\n"
			"ro.kernel.qemu=0\n"
			"dalvik.vm.dexopt-flags=m=y\n"
			"net.bt.name=Android\n"
			"dalvik.vm.stack-trace-file=/data/anr/traces.txt\n"
			"ro.build.version.sdl=2101\n"
			"\n",
	},
	{
		.path = "/sys/devices/system/cpu/kernel_max",
		.size = 2,
		.content = "7\n",
	},
	{
		.path = "/sys/devices/system/cpu/possible",
		.size = 4,
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/present",
		.size = 4,
		.content = "0-7\n",
	},
	{
		.path = "/sys/devices/system/b.L/big_threads",
		.size = 2,
		.content = "4\n",
	},
	{
		.path = "/sys/devices/system/b.L/boot_cluster",
		.size = 17,
		.content = "boot_cluster : 1\n",
	},
	{
		.path = "/sys/devices/system/b.L/core_status",
		.size = 80,
		.content =
			"cpu 0 : 1\n"
			"cpu 1 : 1\n"
			"cpu 2 : 1\n"
			"cpu 3 : 1\n"
			"cpu 4 : 1\n"
			"cpu 5 : 1\n"
			"cpu 6 : 1\n"
			"cpu 7 : 1\n",
	},
	{
		.path = "/sys/devices/system/b.L/little_threads",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/b.L/down_migrations",
		.size = 4,
		.content = "852\n",
	},
	{
		.path = "/sys/devices/system/b.L/up_migrations",
		.size = 5,
		.content = "1969\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/related_cpus",
		.size = 8,
		.content = "0 1 2 3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/affected_cpus",
		.size = 8,
		.content = "0 1 2 3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1300000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "500000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/physical_package_id",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/thread_siblings_list",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/related_cpus",
		.size = 8,
		.content = "0 1 2 3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/affected_cpus",
		.size = 8,
		.content = "0 1 2 3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1300000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "500000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/physical_package_id",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/core_id",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/thread_siblings_list",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cpufreq/related_cpus",
		.size = 8,
		.content = "0 1 2 3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cpufreq/affected_cpus",
		.size = 8,
		.content = "0 1 2 3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1300000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "500000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/physical_package_id",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/core_id",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/thread_siblings_list",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cpufreq/related_cpus",
		.size = 8,
		.content = "0 1 2 3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cpufreq/affected_cpus",
		.size = 8,
		.content = "0 1 2 3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1300000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "500000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/physical_package_id",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/core_id",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/thread_siblings_list",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cpufreq/related_cpus",
		.size = 8,
		.content = "4 5 6 7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cpufreq/affected_cpus",
		.size = 8,
		.content = "4 5 6 7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1900000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "800000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/topology/core_siblings_list",
		.size = 4,
		.content = "4-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/topology/core_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu4/topology/thread_siblings_list",
		.size = 2,
		.content = "4\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cpufreq/related_cpus",
		.size = 8,
		.content = "4 5 6 7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cpufreq/affected_cpus",
		.size = 8,
		.content = "4 5 6 7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1900000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "800000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/topology/core_siblings_list",
		.size = 4,
		.content = "4-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/topology/core_id",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu5/topology/thread_siblings_list",
		.size = 2,
		.content = "5\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cpufreq/related_cpus",
		.size = 8,
		.content = "4 5 6 7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cpufreq/affected_cpus",
		.size = 8,
		.content = "4 5 6 7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1900000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "800000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/topology/core_siblings_list",
		.size = 4,
		.content = "4-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/topology/core_id",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu6/topology/thread_siblings_list",
		.size = 2,
		.content = "6\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cpufreq/related_cpus",
		.size = 8,
		.content = "4 5 6 7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cpufreq/affected_cpus",
		.size = 8,
		.content = "4 5 6 7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1900000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/cpufreq/cpuinfo_min_freq",
		.size = 7,
		.content = "800000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/topology/core_siblings_list",
		.size = 4,
		.content = "4-7\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/topology/core_id",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu7/topology/thread_siblings_list",
		.size = 2,
		.content = "7\n",
	},
	{ NULL },
};

#ifdef __ANDROID__
struct cpuinfo_mock_property properties[] = {
	{
		.key = "audioflinger.bootsnd",
		.value = "0",
	},
	{
		.key = "boot.sfbootcomplete",
		.value = "0",
	},
	{
		.key = "dalvik.vm.dex2oat-Xms",
		.value = "64m",
	},
	{
		.key = "dalvik.vm.dex2oat-Xmx",
		.value = "512m",
	},
	{
		.key = "dalvik.vm.dexopt-flags",
		.value = "m=y",
	},
	{
		.key = "dalvik.vm.heapgrowthlimit",
		.value = "128m",
	},
	{
		.key = "dalvik.vm.heapmaxfree",
		.value = "8m",
	},
	{
		.key = "dalvik.vm.heapminfree",
		.value = "2m",
	},
	{
		.key = "dalvik.vm.heapsize",
		.value = "512m",
	},
	{
		.key = "dalvik.vm.heapstartsize",
		.value = "8m",
	},
	{
		.key = "dalvik.vm.heaptargetutilization",
		.value = "0.75",
	},
	{
		.key = "dalvik.vm.image-dex2oat-Xms",
		.value = "64m",
	},
	{
		.key = "dalvik.vm.image-dex2oat-Xmx",
		.value = "64m",
	},
	{
		.key = "dalvik.vm.isa.arm.features",
		.value = "div",
	},
	{
		.key = "dalvik.vm.stack-trace-file",
		.value = "/data/anr/traces.txt",
	},
	{
		.key = "debug.force_rtl",
		.value = "0",
	},
	{
		.key = "debug.sf.layerdump",
		.value = "0",
	},
	{
		.key = "dev.MDPLimitCondition",
		.value = "0",
	},
	{
		.key = "dev.bootcomplete",
		.value = "1",
	},
	{
		.key = "dev.kies.sommode",
		.value = "TRUE",
	},
	{
		.key = "dev.kiessupport",
		.value = "TRUE",
	},
	{
		.key = "dev.message.reserved",
		.value = "FALSE",
	},
	{
		.key = "drm.service.enabled",
		.value = "true",
	},
	{
		.key = "gsm.current.phone-type",
		.value = "1",
	},
	{
		.key = "gsm.network.type",
		.value = "Unknown",
	},
	{
		.key = "gsm.operator.alpha",
		.value = "",
	},
	{
		.key = "gsm.operator.iso-country",
		.value = "us",
	},
	{
		.key = "gsm.operator.ispsroaming",
		.value = "false",
	},
	{
		.key = "gsm.operator.isroaming",
		.value = "false",
	},
	{
		.key = "gsm.operator.numeric",
		.value = "310260",
	},
	{
		.key = "gsm.sim.operator.alpha",
		.value = "",
	},
	{
		.key = "gsm.sim.operator.iso-country",
		.value = "",
	},
	{
		.key = "gsm.sim.operator.numeric",
		.value = "",
	},
	{
		.key = "gsm.sim.state",
		.value = "ABSENT",
	},
	{
		.key = "gsm.version.baseband",
		.value = "G900HXXU1BOE1",
	},
	{
		.key = "gsm.version.ril-impl",
		.value = "Samsung RIL v3.0",
	},
	{
		.key = "init.svc.BCS-daemon",
		.value = "running",
	},
	{
		.key = "init.svc.DR-daemon",
		.value = "running",
	},
	{
		.key = "init.svc.SIDESYNC_service",
		.value = "running",
	},
	{
		.key = "init.svc.SMD-daemon",
		.value = "running",
	},
	{
		.key = "init.svc.TvoutService_C",
		.value = "running",
	},
	{
		.key = "init.svc.adbd",
		.value = "running",
	},
	{
		.key = "init.svc.apaservice",
		.value = "running",
	},
	{
		.key = "init.svc.at_distributor",
		.value = "running",
	},
	{
		.key = "init.svc.auditd",
		.value = "running",
	},
	{
		.key = "init.svc.bootanim",
		.value = "stopped",
	},
	{
		.key = "init.svc.cpboot-daemon",
		.value = "running",
	},
	{
		.key = "init.svc.cs_service",
		.value = "running",
	},
	{
		.key = "init.svc.debuggerd",
		.value = "running",
	},
	{
		.key = "init.svc.drm",
		.value = "running",
	},
	{
		.key = "init.svc.drsd",
		.value = "running",
	},
	{
		.key = "init.svc.edmaudit",
		.value = "running",
	},
	{
		.key = "init.svc.epmd",
		.value = "running",
	},
	{
		.key = "init.svc.exyrngd",
		.value = "stopped",
	},
	{
		.key = "init.svc.flash_recovery",
		.value = "stopped",
	},
	{
		.key = "init.svc.gpsd",
		.value = "running",
	},
	{
		.key = "init.svc.healthd",
		.value = "running",
	},
	{
		.key = "init.svc.icd",
		.value = "stopped",
	},
	{
		.key = "init.svc.immvibed",
		.value = "stopped",
	},
	{
		.key = "init.svc.installd",
		.value = "running",
	},
	{
		.key = "init.svc.jackservice",
		.value = "running",
	},
	{
		.key = "init.svc.keystore",
		.value = "running",
	},
	{
		.key = "init.svc.knox",
		.value = "stopped",
	},
	{
		.key = "init.svc.lmkd",
		.value = "running",
	},
	{
		.key = "init.svc.logd",
		.value = "running",
	},
	{
		.key = "init.svc.macloader",
		.value = "stopped",
	},
	{
		.key = "init.svc.media",
		.value = "running",
	},
	{
		.key = "init.svc.mobex-daemon",
		.value = "running",
	},
	{
		.key = "init.svc.mobicore",
		.value = "running",
	},
	{
		.key = "init.svc.netd",
		.value = "running",
	},
	{
		.key = "init.svc.p2p_supplicant",
		.value = "running",
	},
	{
		.key = "init.svc.powersnd",
		.value = "stopped",
	},
	{
		.key = "init.svc.privatemode",
		.value = "stopped",
	},
	{
		.key = "init.svc.reactived",
		.value = "running",
	},
	{
		.key = "init.svc.ril-daemon",
		.value = "running",
	},
	{
		.key = "init.svc.scranton_RD",
		.value = "stopped",
	},
	{
		.key = "init.svc.sdcard",
		.value = "stopped",
	},
	{
		.key = "init.svc.sec-sh",
		.value = "stopped",
	},
	{
		.key = "init.svc.secure_storage",
		.value = "running",
	},
	{
		.key = "init.svc.sensorhubservice",
		.value = "running",
	},
	{
		.key = "init.svc.servicemanager",
		.value = "running",
	},
	{
		.key = "init.svc.ss_kb_service",
		.value = "running",
	},
	{
		.key = "init.svc.surfaceflinger",
		.value = "running",
	},
	{
		.key = "init.svc.swapon",
		.value = "stopped",
	},
	{
		.key = "init.svc.ueventd",
		.value = "running",
	},
	{
		.key = "init.svc.vcsFPService",
		.value = "running",
	},
	{
		.key = "init.svc.vold",
		.value = "running",
	},
	{
		.key = "init.svc.watchdogd",
		.value = "running",
	},
	{
		.key = "init.svc.zygote",
		.value = "running",
	},
	{
		.key = "installd.sdcard_manipulate_done",
		.value = "1",
	},
	{
		.key = "keyguard.no_require_sim",
		.value = "true",
	},
	{
		.key = "logd.auditd",
		.value = "false",
	},
	{
		.key = "media.enable-commonsource",
		.value = "true",
	},
	{
		.key = "net.bt.name",
		.value = "Android",
	},
	{
		.key = "net.change",
		.value = "net.qtaguid_enabled",
	},
	{
		.key = "net.hostname",
		.value = "android-a525d87037d29296",
	},
	{
		.key = "net.knoxisl.version",
		.value = "2.0.0",
	},
	{
		.key = "net.knoxscep.version",
		.value = "2.0.1",
	},
	{
		.key = "net.knoxsso.version",
		.value = "2.1.1",
	},
	{
		.key = "net.knoxvpn.version",
		.value = "2.2.0",
	},
	{
		.key = "net.qtaguid_enabled",
		.value = "1",
	},
	{
		.key = "net.streaming.rtsp.uaprof",
		.value = "http://wap.samsungmobile.com/uaprof/",
	},
	{
		.key = "net.tcp.buffersize.default",
		.value = "4096,87380,704512,4096,16384,110208",
	},
	{
		.key = "net.tcp.buffersize.edge",
		.value = "4093,26280,35040,4096,16384,35040",
	},
	{
		.key = "net.tcp.buffersize.evdo",
		.value = "4094,87380,262144,4096,16384,262144",
	},
	{
		.key = "net.tcp.buffersize.gprs",
		.value = "4092,30000,30000,4096,8760,11680",
	},
	{
		.key = "net.tcp.buffersize.hsdpa",
		.value = "4094,87380,704512,4096,16384,262144",
	},
	{
		.key = "net.tcp.buffersize.hspa",
		.value = "4094,87380,704512,4096,16384,262144",
	},
	{
		.key = "net.tcp.buffersize.hspap",
		.value = "4094,87380,1220608,4096,16384,1220608",
	},
	{
		.key = "net.tcp.buffersize.hsupa",
		.value = "4094,87380,704512,4096,16384,262144",
	},
	{
		.key = "net.tcp.buffersize.lte",
		.value = "524288,1048576,2560000,524288,1048576,2560000",
	},
	{
		.key = "net.tcp.buffersize.umts",
		.value = "4094,87380,704512,4096,16384,110208",
	},
	{
		.key = "net.tcp.buffersize.wifi",
		.value = "524288,1048576,4525824,524288,1048576,4525824",
	},
	{
		.key = "net.tcp.default_init_rwnd",
		.value = "60",
	},
	{
		.key = "persist.audio.allsoundmute",
		.value = "0",
	},
	{
		.key = "persist.audio.headsetsysvolume",
		.value = "9",
	},
	{
		.key = "persist.audio.hphonesysvolume",
		.value = "9",
	},
	{
		.key = "persist.audio.mpseek",
		.value = "0",
	},
	{
		.key = "persist.audio.mysound",
		.value = "1",
	},
	{
		.key = "persist.audio.ringermode",
		.value = "2",
	},
	{
		.key = "persist.audio.soundalivefxsec",
		.value = "1",
	},
	{
		.key = "persist.audio.stereospeaker",
		.value = "0",
	},
	{
		.key = "persist.audio.sysvolume",
		.value = "9",
	},
	{
		.key = "persist.audio.uhqa",
		.value = "1",
	},
	{
		.key = "persist.bluetooth_fw_ver",
		.value = "/vendor/firmware/bcm4350_V0301.0563_wisol.hcd",
	},
	{
		.key = "persist.hdmi.hdcp_enabled",
		.value = "1",
	},
	{
		.key = "persist.radio.initphone-type",
		.value = "1",
	},
	{
		.key = "persist.radio.plmnname_1",
		.value = "",
	},
	{
		.key = "persist.radio.plmnname_2",
		.value = "",
	},
	{
		.key = "persist.security.ams.enforcing",
		.value = "1",
	},
	{
		.key = "persist.service.bdroid.version",
		.value = "0",
	},
	{
		.key = "persist.sys.country",
		.value = "US",
	},
	{
		.key = "persist.sys.dalvik.vm.lib.2",
		.value = "libart.so",
	},
	{
		.key = "persist.sys.drs.date",
		.value = "Thu May 21 11:03:12 KST 2015",
	},
	{
		.key = "persist.sys.language",
		.value = "en",
	},
	{
		.key = "persist.sys.localevar",
		.value = "",
	},
	{
		.key = "persist.sys.media.use-awesome",
		.value = "true",
	},
	{
		.key = "persist.sys.profiler_ms",
		.value = "0",
	},
	{
		.key = "persist.sys.sb.setting.enabled",
		.value = "false",
	},
	{
		.key = "persist.sys.setupwizard",
		.value = "FINISH",
	},
	{
		.key = "persist.sys.storage_preload",
		.value = "2",
	},
	{
		.key = "persist.sys.timezone",
		.value = "Asia/Shanghai",
	},
	{
		.key = "persist.sys.usb.config",
		.value = "mtp,adb",
	},
	{
		.key = "ril.ICC_TYPE",
		.value = "0",
	},
	{
		.key = "ril.RildInit",
		.value = "1",
	},
	{
		.key = "ril.atd_status",
		.value = "1_0_0",
	},
	{
		.key = "ril.cbd.boot_done",
		.value = "1",
	},
	{
		.key = "ril.cbd.rfs_check_done",
		.value = "1",
	},
	{
		.key = "ril.cs_svc",
		.value = "1",
	},
	{
		.key = "ril.ecclist00",
		.value = "112,911,999,000,110,118,119",
	},
	{
		.key = "ril.hasisim",
		.value = "0",
	},
	{
		.key = "ril.hw_ver",
		.value = "MP 0.800",
	},
	{
		.key = "ril.model_id",
		.value = "G900H",
	},
	{
		.key = "ril.modem.board",
		.value = "XMM6360",
	},
	{
		.key = "ril.product_code",
		.value = "SM-G900HZWADOR",
	},
	{
		.key = "ril.radiostate",
		.value = "10",
	},
	{
		.key = "ril.rfcal_date",
		.value = "2014.5.2",
	},
	{
		.key = "ril.sales_code",
		.value = "DOR",
	},
	{
		.key = "ril.serialnumber",
		.value = "R21F5004BET",
	},
	{
		.key = "ril.servicestate",
		.value = "2",
	},
	{
		.key = "ril.sw_ver",
		.value = "G900HXXU1BOE1",
	},
	{
		.key = "ril.timezoneID",
		.value = "",
	},
	{
		.key = "rild.libargs",
		.value = "-d /dev/ttyS0",
	},
	{
		.key = "rild.libpath",
		.value = "/system/lib/libsec-ril.so",
	},
	{
		.key = "ro.adb.qemud",
		.value = "1",
	},
	{
		.key = "ro.adb.secure",
		.value = "1",
	},
	{
		.key = "ro.allow.mock.location",
		.value = "0",
	},
	{
		.key = "ro.arch",
		.value = "exynos5422",
	},
	{
		.key = "ro.baseband",
		.value = "unknown",
	},
	{
		.key = "ro.board.platform",
		.value = "exynos5",
	},
	{
		.key = "ro.boot.boot_salescode",
		.value = "",
	},
	{
		.key = "ro.boot.bootloader",
		.value = "G900HXXU1BOE2",
	},
	{
		.key = "ro.boot.debug_level",
		.value = "0x4f4c",
	},
	{
		.key = "ro.boot.emmc_checksum",
		.value = "3",
	},
	{
		.key = "ro.boot.hardware",
		.value = "universal5422",
	},
	{
		.key = "ro.boot.odin_download",
		.value = "1",
	},
	{
		.key = "ro.boot.sec_atd.tty",
		.value = "/dev/ttySAC2",
	},
	{
		.key = "ro.boot.selinux",
		.value = "enforcing",
	},
	{
		.key = "ro.boot.serialno",
		.value = "4d0018234e29316b",
	},
	{
		.key = "ro.boot.warranty_bit",
		.value = "0",
	},
	{
		.key = "ro.bootloader",
		.value = "G900HXXU1BOE2",
	},
	{
		.key = "ro.bootmode",
		.value = "unknown",
	},
	{
		.key = "ro.bt.bdaddr_path",
		.value = "/efs/bluetooth/bt_addr",
	},
	{
		.key = "ro.build.PDA",
		.value = "G900HXXU1BOE2",
	},
	{
		.key = "ro.build.changelist",
		.value = "4521975",
	},
	{
		.key = "ro.build.characteristics",
		.value = "phone",
	},
	{
		.key = "ro.build.date.utc",
		.value = "1432173792",
	},
	{
		.key = "ro.build.date",
		.value = "Thu May 21 11:03:12 KST 2015",
	},
	{
		.key = "ro.build.description",
		.value = "k3gxx-user 5.0 LRX21T G900HXXU1BOE2 release-keys",
	},
	{
		.key = "ro.build.display.id",
		.value = "LRX21T.G900HXXU1BOE2",
	},
	{
		.key = "ro.build.fingerprint",
		.value = "samsung/k3gxx/k3g:5.0/LRX21T/G900HXXU1BOE2:user/release-keys",
	},
	{
		.key = "ro.build.hidden_ver",
		.value = "G900HXXU1BOE2",
	},
	{
		.key = "ro.build.host",
		.value = "SWDD6017",
	},
	{
		.key = "ro.build.id",
		.value = "LRX21T",
	},
	{
		.key = "ro.build.product",
		.value = "k3g",
	},
	{
		.key = "ro.build.scafe.cream",
		.value = "white",
	},
	{
		.key = "ro.build.scafe.shot",
		.value = "single",
	},
	{
		.key = "ro.build.scafe.size",
		.value = "short",
	},
	{
		.key = "ro.build.scafe",
		.value = "americano",
	},
	{
		.key = "ro.build.selinux.enforce",
		.value = "1",
	},
	{
		.key = "ro.build.selinux",
		.value = "1",
	},
	{
		.key = "ro.build.tags",
		.value = "release-keys",
	},
	{
		.key = "ro.build.type",
		.value = "user",
	},
	{
		.key = "ro.build.user",
		.value = "dpi",
	},
	{
		.key = "ro.build.version.all_codenames",
		.value = "REL",
	},
	{
		.key = "ro.build.version.codename",
		.value = "REL",
	},
	{
		.key = "ro.build.version.incremental",
		.value = "G900HXXU1BOE2",
	},
	{
		.key = "ro.build.version.release",
		.value = "5.0",
	},
	{
		.key = "ro.build.version.sdk",
		.value = "21",
	},
	{
		.key = "ro.build.version.sdl",
		.value = "2101",
	},
	{
		.key = "ro.carrier",
		.value = "unknown",
	},
	{
		.key = "ro.chipname",
		.value = "exynos5422",
	},
	{
		.key = "ro.com.android.dateformat",
		.value = "MM-dd-yyyy",
	},
	{
		.key = "ro.com.google.clientidbase",
		.value = "android-samsung",
	},
	{
		.key = "ro.com.google.gmsversion",
		.value = "5.0_r2",
	},
	{
		.key = "ro.config.alarm_alert",
		.value = "Morning_flower.ogg",
	},
	{
		.key = "ro.config.knox",
		.value = "v30",
	},
	{
		.key = "ro.config.media_sound",
		.value = "Media_preview_Touch_the_light.ogg",
	},
	{
		.key = "ro.config.notification_sound",
		.value = "S_Whistle.ogg",
	},
	{
		.key = "ro.config.ringtone",
		.value = "Over_the_horizon.ogg",
	},
	{
		.key = "ro.config.rm_preload_enabled",
		.value = "0",
	},
	{
		.key = "ro.config.tima",
		.value = "1",
	},
	{
		.key = "ro.config.timaversion",
		.value = "3.0",
	},
	{
		.key = "ro.crypto.fuse_sdcard",
		.value = "true",
	},
	{
		.key = "ro.crypto.state",
		.value = "unencrypted",
	},
	{
		.key = "ro.csc.country_code",
		.value = "DOMINICAN REPUBLIC",
	},
	{
		.key = "ro.csc.countryiso_code",
		.value = "DM",
	},
	{
		.key = "ro.csc.sales_code",
		.value = "DOR",
	},
	{
		.key = "ro.dalvik.vm.native.bridge",
		.value = "0",
	},
	{
		.key = "ro.debug_level",
		.value = "0x4f4c",
	},
	{
		.key = "ro.debuggable",
		.value = "0",
	},
	{
		.key = "ro.emmc_checksum",
		.value = "3",
	},
	{
		.key = "ro.error.receiver.default",
		.value = "com.samsung.receiver.error",
	},
	{
		.key = "ro.factorytest",
		.value = "0",
	},
	{
		.key = "ro.hardware",
		.value = "universal5422",
	},
	{
		.key = "ro.hdcp2.rx",
		.value = "tz",
	},
	{
		.key = "ro.hwui.drop_shadow_cache_size",
		.value = "6",
	},
	{
		.key = "ro.hwui.gradient_cache_size",
		.value = "2",
	},
	{
		.key = "ro.hwui.layer_cache_size",
		.value = "34",
	},
	{
		.key = "ro.hwui.path_cache_size",
		.value = "10",
	},
	{
		.key = "ro.hwui.shape_cache_size",
		.value = "4",
	},
	{
		.key = "ro.hwui.text_large_cache_height",
		.value = "4096",
	},
	{
		.key = "ro.hwui.text_large_cache_width",
		.value = "4096",
	},
	{
		.key = "ro.hwui.text_small_cache_height",
		.value = "2048",
	},
	{
		.key = "ro.hwui.text_small_cache_width",
		.value = "2048",
	},
	{
		.key = "ro.hwui.texture_cache_size",
		.value = "50",
	},
	{
		.key = "ro.kernel.qemu",
		.value = "0",
	},
	{
		.key = "ro.nfc.port",
		.value = "I2C",
	},
	{
		.key = "ro.opengles.version",
		.value = "196608",
	},
	{
		.key = "ro.product.board",
		.value = "universal5422",
	},
	{
		.key = "ro.product.brand",
		.value = "samsung",
	},
	{
		.key = "ro.product.cpu.abi2",
		.value = "armeabi",
	},
	{
		.key = "ro.product.cpu.abi",
		.value = "armeabi-v7a",
	},
	{
		.key = "ro.product.cpu.abilist32",
		.value = "armeabi-v7a,armeabi",
	},
	{
		.key = "ro.product.cpu.abilist64",
		.value = "",
	},
	{
		.key = "ro.product.cpu.abilist",
		.value = "armeabi-v7a,armeabi",
	},
	{
		.key = "ro.product.device",
		.value = "k3g",
	},
	{
		.key = "ro.product.locale.language",
		.value = "en",
	},
	{
		.key = "ro.product.locale.region",
		.value = "GB",
	},
	{
		.key = "ro.product.manufacturer",
		.value = "samsung",
	},
	{
		.key = "ro.product.model",
		.value = "SM-G900H",
	},
	{
		.key = "ro.product.name",
		.value = "k3gxx",
	},
	{
		.key = "ro.product_ship",
		.value = "true",
	},
	{
		.key = "ro.revision",
		.value = "10",
	},
	{
		.key = "ro.ril.gprsclass",
		.value = "10",
	},
	{
		.key = "ro.ril.hsxpa",
		.value = "1",
	},
	{
		.key = "ro.sec.fle.encryption",
		.value = "true",
	},
	{
		.key = "ro.secure",
		.value = "1",
	},
	{
		.key = "ro.securestorage.support",
		.value = "true",
	},
	{
		.key = "ro.security.icd.flagmode",
		.value = "single",
	},
	{
		.key = "ro.security.mdpp.release",
		.value = "4",
	},
	{
		.key = "ro.security.mdpp.ux",
		.value = "Enabled",
	},
	{
		.key = "ro.security.mdpp.ver",
		.value = "1.1",
	},
	{
		.key = "ro.security.reactive.active",
		.value = "1",
	},
	{
		.key = "ro.security.reactive.triggered",
		.value = "false",
	},
	{
		.key = "ro.security.vpnpp.release",
		.value = "3",
	},
	{
		.key = "ro.security.vpnpp.ver",
		.value = "1.4",
	},
	{
		.key = "ro.secwvk",
		.value = "220",
	},
	{
		.key = "ro.serialno",
		.value = "4d0018234e29316b",
	},
	{
		.key = "ro.setupwizard.mode",
		.value = "DISABLED",
	},
	{
		.key = "ro.sf.lcd_density",
		.value = "480",
	},
	{
		.key = "ro.smps.enable",
		.value = "true",
	},
	{
		.key = "ro.warranty_bit",
		.value = "0",
	},
	{
		.key = "ro.wifi.channels",
		.value = "",
	},
	{
		.key = "ro.zygote",
		.value = "zygote32",
	},
	{
		.key = "secmm.player.gp.url",
		.value = "true",
	},
	{
		.key = "secmm.player.uhqamode",
		.value = "True",
	},
	{
		.key = "security.mdpp.result",
		.value = "None",
	},
	{
		.key = "security.mdpp",
		.value = "Ready",
	},
	{
		.key = "selinux.policy_version",
		.value = "SEPF_SM-G900H_5.0_0009",
	},
	{
		.key = "selinux.reload_policy",
		.value = "1",
	},
	{
		.key = "service.bootanim.exit",
		.value = "0",
	},
	{
		.key = "service.media.powersnd",
		.value = "1",
	},
	{
		.key = "storage.mmc.size",
		.value = "15758000128",
	},
	{
		.key = "storage.preload.complete",
		.value = "1",
	},
	{
		.key = "sys.adaptivedisplay.eadon",
		.value = "false",
	},
	{
		.key = "sys.boot_completed",
		.value = "1",
	},
	{
		.key = "sys.dockstate",
		.value = "0",
	},
	{
		.key = "sys.enterprise.billing.version",
		.value = "1.0.0",
	},
	{
		.key = "sys.knox.exists",
		.value = "0",
	},
	{
		.key = "sys.knox.store",
		.value = "0",
	},
	{
		.key = "sys.mobicoredaemon.enable",
		.value = "true",
	},
	{
		.key = "sys.settings_system_version",
		.value = "9",
	},
	{
		.key = "sys.sysctl.extra_free_kbytes",
		.value = "24300",
	},
	{
		.key = "sys.usb.config",
		.value = "mtp,adb",
	},
	{
		.key = "sys.usb.state",
		.value = "mtp,adb",
	},
	{
		.key = "vold.pfe",
		.value = "deactivated",
	},
	{
		.key = "vold.post_fs_data_done",
		.value = "1",
	},
	{
		.key = "wifi.interface",
		.value = "wlan0",
	},
	{
		.key = "wlan.driver.status",
		.value = "ok",
	},
	{
		.key = "wlan.wfd.status",
		.value = "disconnected",
	},
	{ NULL },
};
#endif /* __ANDROID__ */
